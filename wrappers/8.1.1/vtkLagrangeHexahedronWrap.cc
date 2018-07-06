/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkNonLinearCellWrap.h"
#include "vtkLagrangeHexahedronWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkCellWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPointsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLagrangeHexahedronWrap::ptpl;

VtkLagrangeHexahedronWrap::VtkLagrangeHexahedronWrap()
{ }

VtkLagrangeHexahedronWrap::VtkLagrangeHexahedronWrap(vtkSmartPointer<vtkLagrangeHexahedron> _native)
{ native = _native; }

VtkLagrangeHexahedronWrap::~VtkLagrangeHexahedronWrap()
{ }

void VtkLagrangeHexahedronWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLagrangeHexahedron").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LagrangeHexahedron").ToLocalChecked(), ConstructorGetter);
}

void VtkLagrangeHexahedronWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLagrangeHexahedronWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkNonLinearCellWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkNonLinearCellWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLagrangeHexahedronWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CellBoundary", CellBoundary);
	Nan::SetPrototypeMethod(tpl, "cellBoundary", CellBoundary);

	Nan::SetPrototypeMethod(tpl, "GetCellDimension", GetCellDimension);
	Nan::SetPrototypeMethod(tpl, "getCellDimension", GetCellDimension);

	Nan::SetPrototypeMethod(tpl, "GetCellType", GetCellType);
	Nan::SetPrototypeMethod(tpl, "getCellType", GetCellType);

	Nan::SetPrototypeMethod(tpl, "GetEdge", GetEdge);
	Nan::SetPrototypeMethod(tpl, "getEdge", GetEdge);

	Nan::SetPrototypeMethod(tpl, "GetFace", GetFace);
	Nan::SetPrototypeMethod(tpl, "getFace", GetFace);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEdges", GetNumberOfEdges);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEdges", GetNumberOfEdges);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFaces", GetNumberOfFaces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFaces", GetNumberOfFaces);

	Nan::SetPrototypeMethod(tpl, "GetOrder", GetOrder);
	Nan::SetPrototypeMethod(tpl, "getOrder", GetOrder);

	Nan::SetPrototypeMethod(tpl, "GetParametricCenter", GetParametricCenter);
	Nan::SetPrototypeMethod(tpl, "getParametricCenter", GetParametricCenter);

	Nan::SetPrototypeMethod(tpl, "GetParametricDistance", GetParametricDistance);
	Nan::SetPrototypeMethod(tpl, "getParametricDistance", GetParametricDistance);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PointIndexFromIJK", PointIndexFromIJK);
	Nan::SetPrototypeMethod(tpl, "pointIndexFromIJK", PointIndexFromIJK);

	Nan::SetPrototypeMethod(tpl, "RequiresInitialization", RequiresInitialization);
	Nan::SetPrototypeMethod(tpl, "requiresInitialization", RequiresInitialization);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Triangulate", Triangulate);
	Nan::SetPrototypeMethod(tpl, "triangulate", Triangulate);

#ifdef VTK_NODE_PLUS_VTKLAGRANGEHEXAHEDRONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKLAGRANGEHEXAHEDRONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkLagrangeHexahedronWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLagrangeHexahedron> native = vtkSmartPointer<vtkLagrangeHexahedron>::New();
		VtkLagrangeHexahedronWrap* obj = new VtkLagrangeHexahedronWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLagrangeHexahedronWrap::CellBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->CellBoundary(
					info[0]->Int32Value(),
					(double *)(a1->Buffer()->GetContents().Data()),
					(vtkIdList *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->CellBoundary(
					info[0]->Int32Value(),
					b1,
					(vtkIdList *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLagrangeHexahedronWrap::GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLagrangeHexahedronWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLagrangeHexahedronWrap::GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkCell * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEdge(
			info[0]->Int32Value()
		);
		VtkCellWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellWrap *w = new VtkCellWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLagrangeHexahedronWrap::GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkCell * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFace(
			info[0]->Int32Value()
		);
		VtkCellWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellWrap *w = new VtkCellWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLagrangeHexahedronWrap::GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLagrangeHexahedronWrap::GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLagrangeHexahedronWrap::GetOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOrder(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLagrangeHexahedronWrap::GetParametricCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParametricCenter(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParametricCenter(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLagrangeHexahedronWrap::GetParametricDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParametricDistance(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParametricDistance(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLagrangeHexahedronWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkLagrangeHexahedronWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	vtkLagrangeHexahedron * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkLagrangeHexahedronWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLagrangeHexahedronWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLagrangeHexahedronWrap *w = new VtkLagrangeHexahedronWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLagrangeHexahedronWrap::PointIndexFromIJK(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->PointIndexFromIJK(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLagrangeHexahedronWrap::RequiresInitialization(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RequiresInitialization();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLagrangeHexahedronWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkLagrangeHexahedron * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkLagrangeHexahedronWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLagrangeHexahedronWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLagrangeHexahedronWrap *w = new VtkLagrangeHexahedronWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLagrangeHexahedronWrap::Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLagrangeHexahedronWrap *wrapper = ObjectWrap::Unwrap<VtkLagrangeHexahedronWrap>(info.Holder());
	vtkLagrangeHexahedron *native = (vtkLagrangeHexahedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIdListWrap *a1 = ObjectWrap::Unwrap<VtkIdListWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Triangulate(
					info[0]->Int32Value(),
					(vtkIdList *) a1->native.GetPointer(),
					(vtkPoints *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

