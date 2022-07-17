var attempt = 3;
function validate(){
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;

    if ( username == "si2p" && password == "stmikroyal"){
        alert ("Login successfully");
        window.location = "home.html";
        return false;
    } 
    else{
        attempt --;
        alert("You have left "+attempt+" attempt;");
        if( attempt == 0){
            document.getElementById("username").disabled = true;
            document.getElementById("password").disabled = true;
            document.getElementById("submit").disabled = true;
            alert("Username : si2p \nPassword : stmikroyal");
            return false;
        }
    }
}