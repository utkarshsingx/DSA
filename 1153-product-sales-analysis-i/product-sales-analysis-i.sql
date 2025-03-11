SELECT product_name, year, price
FROM Product as e1
LEFT JOIN Sales as e2
ON e1.product_id = e2.product_id 
WHERE e2.product_id is NOT NULL