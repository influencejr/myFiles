let name = prompt("Enter name of your file (be sure to enter file extension): ")
let isSend = true
function fileSend(){
    if(name || !isSend){ document.write(`File ${name} was successfully send!`)}
    else{ document.write("File could not be sent!")}
}
