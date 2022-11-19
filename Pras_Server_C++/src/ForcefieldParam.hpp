/*******************************************************************************************************************************
This file is a part of the Protein Repair and Analysis Server written by Osita S. Nnyigide

See the included LICENSE file
********************************************************************************************************************************/

#ifndef FP_H
#define FP_H

#include <map>
#include <vector>

using namespace std;

map <string, map<string, vector<float>>> ffparam ={
  
    {"ASP",
          {{"N",{-0.558201, 0.3250001, 0.711280}},
          {"CA",{0.007225, 0.339967, 0.457730}},
          {"C",{0.443199, 0.339967, 0.359824}},
          {"O",{-0.501445, 0.295992, 0.878640}},
          {"CB",{-0.047555, 0.339967, 0.457730}}, 
          {"CG",{0.745168, 0.339967, 0.359824}},
          {"OD1",{-0.730385, 0.295992, 0.878640}},
          {"OD2",{-0.730385, 0.295992, 0.878640}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},

    {"ALA",
          {{"N",{-0.404773, 0.3250001, 0.711280}},
          {"CA",{-0.027733, 0.339967, 0.457730}},
          {"C",{0.569383, 0.339967, 0.359824}},
          {"O",{-0.555129, 0.295992, 0.878640}},
          {"CB",{-0.229951, 0.339967, 0.457730}}, 
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"ARG",
          {{"N",{-0.300879, 0.3250001, 0.711280}},
          {"CA",{-0.131381, 0.339967, 0.457730}},
          {"C",{0.730308, 0.339967, 0.359824}},
          {"O",{-0.578332, 0.295992, 0.878640}},
          {"CB",{0.036707, 0.339967, 0.457730}},
          {"CG",{0.012454, 0.339967, 0.457730}}, 
          {"CD",{0.126329, 0.339967, 0.457730}},
          {"NE",{-0.464890, 0.3250001, 0.711280}},
          {"CZ",{0.565543, 0.339967, 0.359824}},
          {"NH1",{-0.685774, 0.3250001, 0.711280}},
          {"NH2",{-0.685774, 0.3250001, 0.711280}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}}, 
        
    {"ASN",
          {{"N",{-0.430106, 0.3250001, 0.711280}},
          {"CA",{0.044609, 0.339967, 0.457730}},
          {"C",{0.617141, 0.339967, 0.359824}},
          {"O",{-0.523909, 0.295992, 0.878640}},
          {"CB",{-0.093650, 0.339967, 0.457730}},
          {"CG",{0.583519, 0.339967, 0.359824}}, 
          {"ND2",{-0.781735, 0.3250001, 0.711280}},
          {"OD1",{-0.526813, 0.295992, 0.878640}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
              
    {"CYS",
          {{"N",{-0.396165, 0.3250001, 0.711280}},
          {"CA",{-0.073501, 0.339967, 0.457730}},
          {"C",{0.643035, 0.339967, 0.359824}},
          {"O",{-0.584861, 0.295992, 0.878640}},
          {"CB",{-0.221371, 0.339967, 0.457730}},
          {"SG",{-0.285182, 0.356359, 1.04600}}, 
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"GLU",
          {{"N",{-0.423392, 0.3250001, 0.711280}},
          {"CA",{0.031633, 0.339967, 0.457730}},
          {"C",{0.469735, 0.339967, 0.359824}},
          {"O",{-0.592528, 0.295992, 0.878640}},
          {"CB",{0.074772, 0.339967, 0.457730}},
          {"CG",{-0.033909, 0.339967, 0.457730}}, 
          {"CD",{0.765188, 0.339967, 0.359824}},
          {"OE1",{-0.824035, 0.295992, 0.878640}},
          {"OE2",{-0.824035, 0.295992, 0.878640}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"GLN",
          {{"N",{-0.387353, 0.3250001, 0.711280}},
          {"CA",{0.037470, 0.339967, 0.457730}},
          {"C",{0.418577, 0.339967, 0.359824}},
          {"O",{-0.565310, 0.295992, 0.878640}},
          {"CB",{-0.032112, 0.339967, 0.457730}},
          {"CG",{-0.020264, 0.339967, 0.457730}}, 
          {"CD",{0.667812, 0.339967, 0.359824}},
          {"NE2",{-0.883393, 0.3250001, 0.711280}},
          {"OE1",{-0.628483, 0.295992, 0.878640}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},

    {"GLY",
          {{"N",{-0.374282, 0.3250001, 0.711280}},
          {"CA",{-0.128844, 0.339967, 0.457730}},
          {"C",{0.580584, 0.339967, 0.359824}},
          {"O",{-0.509157, 0.295992, 0.878640}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"HIS",
          {{"N",{-0.506799, 0.3250001, 0.711280}},
          {"CA",{0.119066, 0.339967, 0.457730}},
          {"C",{0.515947, 0.339967, 0.359824}},
          {"O",{-0.599831, 0.295992, 0.878640}},
          {"CB",{-0.122638, 0.339967, 0.457730}},
          {"CG",{-0.001547, 0.339967, 0.359824}}, 
          {"CD2",{0.043744, 0.339967, 0.359824}},
          {"ND1",{-0.205785, 0.3250001, 0.711280}},
          {"CE1",{0.147273, 0.339967, 0.359824}},
          {"NE2",{-0.601482, 0.3250001, 0.711280}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},

    {"ILE",
          {{"N",{-0.451047, 0.3250001, 0.711280}},
          {"CA",{-0.101874, 0.339967, 0.457730}},
          {"C",{0.569383, 0.339967, 0.359824}},
          {"O",{-0.619535, 0.295992, 0.878640}},
          {"CB",{0.062238, 0.339967, 0.457730}},
          {"CG1",{0.022230, 0.339967, 0.457730}}, 
          {"CG2",{-0.129989, 0.339967, 0.457730}},
          {"CD1",{-0.101251, 0.339967, 0.457730}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"LYS",
          {{"N",{-0.743778, 0.3250001, 0.711280}},
          {"CA",{-0.038773, 0.339967, 0.457730}},
          {"C",{0.725129, 0.339967, 0.359824}},
          {"O",{-0.563157, 0.295992, 0.878640}},
          {"CB",{-0.108273, 0.339967, 0.457730}},
          {"CG",{0.033341, 0.339967, 0.457730}}, 
          {"CD",{-0.047841, 0.339967, 0.457730}},
          {"CE",{-0.069974, 0.339967, 0.457730}},
          {"NZ",{-0.250358, 0.3250001, 0.711280}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"LEU",
          {{"N",{-0.355153, 0.3250001, 0.711280}},
          {"CA",{-0.101497, 0.339967, 0.457730}},
          {"C",{0.573471, 0.339967, 0.359824}},
          {"O",{-0.557847, 0.295992, 0.878640}},
          {"CB",{-0.144399, 0.339967, 0.457730}},
          {"CG",{0.191982, 0.339967, 0.457730}}, 
          {"CD1",{-0.123036, 0.339967, 0.457730}},
          {"CD2",{-0.123036, 0.339967, 0.457730}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
 
    {"MET",
          {{"N",{-0.394918, 0.3250001, 0.711280}},
          {"CA",{-0.087681, 0.339967, 0.457730}},
          {"C",{0.599684, 0.339967, 0.359824}},
          {"O",{-0.566424, 0.295992, 0.878640}},
          {"CB",{0.019227, 0.339967, 0.457730}},
          {"CG",{-0.208167, 0.339967, 0.457730}}, 
          {"SD",{-0.211958, 0.356359, 0.104600}},
          {"CE",{-0.284698, 0.339967, 0.457730}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},

    {"PRO",
          {{"N",{-0.088116, 0.3250001, 0.711280}},
          {"CA",{-0.034577, 0.339967, 0.457730}},
          {"C",{0.333720, 0.339967, 0.359824}},
          {"O",{-0.434559, 0.295992, 0.878640}},
          {"CB",{-0.003351, 0.339967, 0.457730}},
          {"CG",{0.013059, 0.339967, 0.457730}}, 
          {"CD",{-0.011906, 0.339967, 0.457730}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"PHE",
          {{"N",{-0.371290, 0.3250001, 0.711280}},
          {"CA",{-0.030057, 0.339967, 0.457730}},
          {"C",{0.547987, 0.339967, 0.359824}},
          {"O",{-0.506795, 0.295992, 0.878640}},
          {"CB",{-0.098720, 0.339967, 0.457730}},
          {"CG",{0.021313, 0.339967, 0.359824}}, 
          {"CD1",{-0.083109, 0.339967, 0.359824}},
          {"CD2",{-0.083109, 0.339967, 0.359824}},
          {"CE1",{-0.156974, 0.339967, 0.359824}},
          {"CE2",{-0.156974, 0.339967, 0.359824}},
          {"CZ",{-0.099824, 0.339967, 0.359824}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},

    {"SER",
          {{"N",{-0.541430, 0.3250001, 0.711280}},
          {"CA",{0.118140, 0.339967, 0.457730}},
          {"C",{0.483424, 0.339967, 0.359824}},
          {"O",{-0.580829, 0.295992, 0.878640}},
          {"CB",{0.146998, 0.339967, 0.457730}},
          {"OG",{-0.640312, 0.306647, 0.880314}}, 
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"THR",
          {{"N",{-0.245382, 0.3250001, 0.711280}},
          {"CA",{-0.271249, 0.339967, 0.457730}},
          {"C",{0.559878, 0.339967, 0.359824}},
          {"O",{-0.552020, 0.295992, 0.878640}},
          {"CB",{0.237868, 0.339967, 0.457730}},
          {"CG2",{-0.176489, 0.339967, 0.457730}}, 
          {"OG1",{-0.601931, 0.306647, 0.880314}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"TYR",
          {{"N",{-0.487560, 0.3250001, 0.711280}},
          {"CA",{0.009614, 0.339967, 0.457730}},
          {"C",{0.622290, 0.339967, 0.359824}},
          {"O",{-0.526607, 0.295992, 0.878640}},
          {"CB",{-0.051853, 0.339967, 0.457730}},
          {"CG",{0.112601, 0.339967, 0.359824}}, 
          {"CD1",{-0.183461, 0.339967, 0.359824}},
          {"CD2",{-0.183461, 0.339967, 0.359824}},
          {"CE1",{-0.181823, 0.339967, 0.359824}},
          {"CE2",{-0.181823, 0.339967, 0.359824}},
          {"CZ", {0.206277, 0.339967, 0.359824}},
          {"OH", {-0.421233, 0.306647, 0.880314}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"TRP",
          {{"N",{-0.427579, 0.3250001, 0.711280}},
          {"CA",{-0.020082, 0.339967, 0.457730}},
          {"C",{0.584129, 0.339967, 0.359824}},
          {"O",{-0.494730, 0.295992, 0.878640}},
          {"CB",{-0.098364, 0.339967, 0.457730}},
          {"CG",{-0.099797, 0.339967, 0.359824}}, 
          {"CD1",{-0.174053, 0.339967, 0.359824}},
          {"CD2",{0.089641, 0.339967, 0.359824}},
          {"CE2",{0.141523, 0.339967, 0.359824}},
          {"CE3",{-0.153992, 0.339967, 0.359824}},
          {"NE1",{-0.298433, 0.3250001, 0.711280}},
          {"CZ2",{-0.210701, 0.339967, 0.359824}},
          {"CZ3",{-0.164054, 0.339967, 0.359824}},
          {"CH2",{-0.133022, 0.339967, 0.359824}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}},
        
    {"VAL",
          {{"N",{-0.450087, 0.3250001, 0.711280}},
          {"CA",{-0.051858, 0.339967, 0.457730}},
          {"C",{0.447359, 0.339967, 0.359824}},
          {"O",{-0.404629, 0.295992, 0.878640}},
          {"CB",{0.395217, 0.339967, 0.457730}},
          {"CG1",{-0.090132, 0.339967, 0.457730}}, 
          {"CG2",{0.126329, 0.339967, 0.457730}},
          {"OXT",{-0.501445, 0.295992, 0.878640}}}}

};

#endif