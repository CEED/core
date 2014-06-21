#ifndef PARMA_WEIGHTS_H
#define PARMA_WEIGHTS_H
#include <apfMesh.h>
#include "parma_associative.h"

namespace parma {
  class Sides;
  class Weights : public Associative<double> {
    public:
      Weights(apf::Mesh* m, apf::MeshTag* w, Sides* s) {}
      virtual double self()=0;
    private:
      Weights();
  };
  Weights* makeEntWeights(apf::Mesh* m, apf::MeshTag* w, Sides* s, int dim);
  Weights* makeGhostWeights(apf::Mesh* m, apf::MeshTag* w, Sides* s, 
      int dim, int layers, int bridge);
}

#endif

