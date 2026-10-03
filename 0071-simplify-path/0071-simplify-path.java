class Solution {
    public String simplifyPath(String path) {
        Stack<String> st=new Stack<>();
        String [] sarr=path.split("/");
        for(String s:sarr){
            if(s.equals("")||s.equals(".")){
                continue;
            }
            else if(s.equals("..")){
                if(!st.isEmpty()){
                    st.pop();
                }
            }
            else{
                st.push(s);
            }
        }
        StringBuilder res=new StringBuilder();
        for(String str:st){
            res.append("/").append(str);
        }
        if(res.length()==0){
            return "/";
        }
        return res.toString();

    }
}