%sdsdsd
%sem beer -> fish no dinner
%%beer and fish -> sem ice
%ice  and nao beer -> nuca fish
beer(b).
fish(f).
ice_cream(i).


fof(diet1,conjectue, (~b=>f) &((b & f) => ~i) & ((i|~b)=>~f) =>b).

fof(diet1,conjectue, (~b=>f) &((b & f) => ~i) & ((i|~b)=>~f) => (i&f) ).
