var player1=document.querySelector("#player1");
var player2=document.querySelector("#player2");
var p_1=document.querySelector("#left");
var p_2=document.querySelector("#right");
var p1score=0;
var p2score=0;
var userinput=document.querySelector("input");
var times=document.querySelector("#times");
var gameover=false;
var winningScore=5;
var replay=document.querySelector("#reset");

player1.addEventListener("click",function(){
    if(!gameover){
        p1score++;
        p_1.textContent=p1score;
        if(p1score===winningScore){
            p_1.classList.add("green");
            gameover=true;
        }
    }
  
});

player2.addEventListener("click",function(){
    if(!gameover){
        p2score++;
        p_2.textContent=p2score;
        if(p2score===winningScore){
            p_2.classList.add("green");
            gameover=true;
        }
    }
});

reset.addEventListener("click",function(){
    p1score=0;
    p2score=0;
    p_1.textContent=0;
    p_2.textContent=0;
    p_1.classList.remove("green");
    p_2.classList.remove("green");
    gameover=false;
})


userinput.addEventListener("change",function(){
    times.innerHTML=userinput.value;
    winningScore=Number(userinput.value);

})
