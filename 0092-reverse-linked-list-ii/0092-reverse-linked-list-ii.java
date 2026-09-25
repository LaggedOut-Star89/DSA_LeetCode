class Solution {
    public static ListNode reverse(ListNode head){
        ListNode curr=head;
        ListNode prev=null;
        ListNode fwd=null;

        while(curr!=null){
            fwd=curr.next;
            curr.next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }

    public ListNode reverseBetween(ListNode head, int left, int right) {

        ListNode dummy=new ListNode(-1);
        dummy.next=head;

        ListNode temp=dummy;

        for(int i=1;i<left;i++){
            temp=temp.next;
        }

        ListNode t1=temp;
        ListNode h2=t1.next;

        temp=t1;
        for(int i=left;i<=right;i++){
            temp=temp.next;
        }

        ListNode t2=temp;
        ListNode h3=t2.next;

        t1.next=null;
        t2.next=null;

        ListNode prev=reverse(h2);

        t1.next=prev;
        h2.next=h3;

        return dummy.next;
    }
}