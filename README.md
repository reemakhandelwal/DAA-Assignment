<h1>DAA Assignment</h1>
<h1>Name: Reema Khandelwal</h1>
<h1>Roll no.: 16 <br>Batch: A1</h1>


<h2>Explanation of logic:</h2>
<h3><em>cycle() function</em></h3>
<p>A boolean function which calls checkCycle() function.
</p>
<h3><em>checkCycle() function</em></h3>
<p> A recursive function which calls itself when vertex is adjacent and not yet visited.
</p>
<hr>
<h2>Test cases:</h2>
<hr>
<h3><em>test case 1</em></h3>
<div>
<p>Number of vertex: 5</p> 
<p>Adjacency matrix:
<table>
<tr><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td></tr>
<tr><td>1</td><td>0</td><td>1</td><td>0</td><td>1</td></tr>
<tr><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr>
<tr><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td></tr>
<tr><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr>
</table>
<p><img width="427" alt="image" src="https://user-images.githubusercontent.com/94159340/203806907-61b5ac87-3b26-46b1-8895-94a8196ada03.png">
</p>
</p>
<p>Output:<br />Part of graph is cyclic<br />
The path is: 1 2 3 4 1</p>
</div>
<hr>
<h3><em>test case 2</em></h3>
<div>
<p>Number of vertex: 4</p> 
<p>Adjacency matrix:
<table>
<tr><td>0</td><td>1</td><td>0</td><td>0</td></tr>
<tr><td>1</td><td>0</td><td>1</td><td>1</td></tr>
<tr><td>0</td><td>1</td><td>0</td><td>1</td></tr>
<tr><td>0</td><td>1</td><td>1</td><td>0</td></tr>
</table>
<p><img width="424" alt="image" src="https://user-images.githubusercontent.com/94159340/203807438-06eba4f3-b7b0-4570-b2f2-20f5f817714c.png">
</p>
</p>
<p>Output:<br />Part of graph is cyclic<br />
    The path is: 1 2 3 1</p>
</div>

<hr>
<h3><em>test case 3</em></h3>
<div>
<p>Number of vertex: 3</p> 
<p>Adjacency matrix:
<table>
<tr><td>0</td><td>1</td><td>1</td></tr>
<tr><td>1</td><td>0</td><td>1</td></tr>
<tr><td>1</td><td>1</td><td>0</td></tr>
</table>
<p><img width="425" alt="image" src="https://user-images.githubusercontent.com/94159340/203808369-a2a4198c-3aa9-49b0-9836-494f641dad46.png">
</p>
</p>
<p>Output:<br />Complete graph is cyclic.<br />
    The path is: 0 1 2 0</p>
</div>
<hr>
<h3><em>test case 4</em></h3>
<div>
<p>Number of vertex: 3</p> 
<p>Adjacency matrix:
<table>
<tr><td>0</td><td>1</td><td>1</td></tr>
<tr><td>1</td><td>0</td><td>1</td></tr>
<tr><td>1</td><td>1</td><td>0</td></tr>
</table>
<p><img width="425" alt="image" src="https://user-images.githubusercontent.com/94159340/203808670-cb2eff00-44c4-4665-b5af-b58ba128d629.png">
</p>
</p>
<p>Output:<br />No cycle in the graph.</p>
</div>
