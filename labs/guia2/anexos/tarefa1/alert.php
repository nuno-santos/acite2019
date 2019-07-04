<!DOCTYPE html>
<html>
<body>

    <b>What date is it?</b>
    <p>
    The current date calculated at the client is:

    <script>
        var today = new Date();
        var dd = String(today.getDate()).padStart(2, '0');
        var mm = String(today.getMonth() + 1).padStart(2, '0');
        var yyyy = today.getFullYear();

        today = mm + '/' + dd + '/' + yyyy;
        document.write(today);
    </script>
    <p>

    <?php
    $date = date('m/d/Y', time());
    echo "The current date calculated at the server is:" . $date;
    ?>

</body>
</html>

