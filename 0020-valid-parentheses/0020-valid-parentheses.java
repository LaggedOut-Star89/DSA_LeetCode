
class Solution {
    public boolean isValid(String s) {
        int n=s.length();
        Stack<Character> st=new Stack<>();
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            if(ch=='('||ch=='['||ch=='{'){
                st.push(ch);
            }
            else{
                if(st.size()==0) return false;
                char top=st.pop();
                if(ch==')' && top!='(') return false;
                if(ch==']' && top!='[') return false;
                if(ch=='}' && top!='{') return false;
            }

        }
        return (st.size()==0);
    }
}