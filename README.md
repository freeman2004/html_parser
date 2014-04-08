html_parser
===========
html_parser/Code
1. Excute make
2. type html_parser
3. Wait for input something

<html>
  <body $>
    <title> $ </title>
    <a href="$" alt="$"> url </a>
  </body>
</html>

4. output 
<html>
  <body [[ tag=body ]]>
    <title> [[ tag=title ]] </title>
    <a href="[[ tag=a attr=href ]]" alt="[[ tag=a attr=alt ]]"> url </a>
  </body>
</html>

Reference:
        [[Streaming HTML parser|https://code.google.com/p/streamhtmlparser/]]
