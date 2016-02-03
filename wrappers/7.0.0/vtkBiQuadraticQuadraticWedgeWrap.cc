/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkNonLinearCellWrap.h"
#include "vtkBiQuadraticQuadraticWedgeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCellWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBiQuadraticQuadraticWedgeWrap::ptpl;

VtkBiQuadraticQuadraticWedgeWrap::VtkBiQuadraticQuadraticWedgeWrap()
{ }

VtkBiQuadraticQuadraticWedgeWrap::VtkBiQuadraticQuadraticWedgeWrap(vtkSmartPointer<vtkBiQuadraticQuadraticWedge> _native)
{ native = _native; }

VtkBiQuadraticQuadraticWedgeWrap::~VtkBiQuadraticQuadraticWedgeWrap()
{ }

void VtkBiQuadraticQuadraticWedgeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBiQuadraticQuadraticWedge").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BiQuadraticQuadraticWedge").ToLocalChecked(), ConstructorGetter);
}

void VtkBiQuadraticQuadraticWedgeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBiQuadraticQuadraticWedgeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkNonLinearCellWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkNonLinearCellWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBiQuadraticQuadraticWedgeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CellBoundary", CellBoundary);
	Nan::SetPrototypeMethod(tpl, "cellBoundary", CellBoundary);

	Nan::SetPrototypeMethod(tpl, "GetCellDimension", GetCellDimension);
	Nan::SetPrototypeMethod(tpl, "getCellDimension", GetCellDimension);

	Nan::SetPrototypeMethod(tpl, "GetCellType", GetCellType);
	Nan::SetPrototypeMethod(tpl, "getCellType", GetCellType);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdge", GetEdge);
	Nan::SetPrototypeMethod(tpl, "getEdge", GetEdge);

	Nan::SetPrototypeMethod(tpl, "GetFace", GetFace);
	Nan::SetPrototypeMethod(tpl, "getFace", GetFace);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEdges", GetNumberOfEdges);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEdges", GetNumberOfEdges);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFaces", GetNumberOfFaces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFaces", GetNumberOfFaces);

	Nan::SetPrototypeMethod(tpl, "GetParametricCenter", GetParametricCenter);
	Nan::SetPrototypeMethod(tpl, "getParametricCenter", GetParametricCenter);

	Nan::SetPrototypeMethod(tpl, "InterpolateDerivs", InterpolateDerivs);
	Nan::SetPrototypeMethod(tpl, "interpolateDerivs", InterpolateDerivs);

	Nan::SetPrototypeMethod(tpl, "InterpolateFunctions", InterpolateFunctions);
	Nan::SetPrototypeMethod(tpl, "interpolateFunctions", InterpolateFunctions);

	Nan::SetPrototypeMethod(tpl, "InterpolationDerivs", InterpolationDerivs);
	Nan::SetPrototypeMethod(tpl, "interpolationDerivs", InterpolationDerivs);

	Nan::SetPrototypeMethod(tpl, "InterpolationFunctions", InterpolationFunctions);
	Nan::SetPrototypeMethod(tpl, "interpolationFunctions", InterpolationFunctions);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Triangulate", Triangulate);
	Nan::SetPrototypeMethod(tpl, "triangulate", Triangulate);

	ptpl.Reset( tpl );
}

void VtkBiQuadraticQuadraticWedgeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBiQuadraticQuadraticWedge> native = vtkSmartPointer<vtkBiQuadraticQuadraticWedge>::New();
		VtkBiQuadraticQuadraticWedgeWrap* obj = new VtkBiQuadraticQuadraticWedgeWrap(native);
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

void VtkBiQuadraticQuadraticWedgeWrap::CellBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
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

void VtkBiQuadraticQuadraticWedgeWrap::GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiQuadraticQuadraticWedgeWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiQuadraticQuadraticWedgeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBiQuadraticQuadraticWedgeWrap::GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
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

void VtkBiQuadraticQuadraticWedgeWrap::GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
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

void VtkBiQuadraticQuadraticWedgeWrap::GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiQuadraticQuadraticWedgeWrap::GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiQuadraticQuadraticWedgeWrap::GetParametricCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
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

void VtkBiQuadraticQuadraticWedgeWrap::InterpolateDerivs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 45 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateDerivs(
				(double *)(a0->Buffer()->GetContents().Data()),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[45];
			if( a1->Length() < 45 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 45; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateDerivs(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			return;
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[45];
			if( a1->Length() < 45 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 45; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateDerivs(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 45 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateDerivs(
				b0,
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiQuadraticQuadraticWedgeWrap::InterpolateFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 15 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateFunctions(
				(double *)(a0->Buffer()->GetContents().Data()),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[15];
			if( a1->Length() < 15 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 15; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateFunctions(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			return;
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[15];
			if( a1->Length() < 15 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 15; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateFunctions(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 15 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateFunctions(
				b0,
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiQuadraticQuadraticWedgeWrap::InterpolationDerivs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 45 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolationDerivs(
				(double *)(a0->Buffer()->GetContents().Data()),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[45];
			if( a1->Length() < 45 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 45; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolationDerivs(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			return;
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[45];
			if( a1->Length() < 45 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 45; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolationDerivs(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 45 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolationDerivs(
				b0,
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiQuadraticQuadraticWedgeWrap::InterpolationFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 15 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolationFunctions(
				(double *)(a0->Buffer()->GetContents().Data()),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[15];
			if( a1->Length() < 15 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 15; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolationFunctions(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			return;
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[15];
			if( a1->Length() < 15 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 15; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolationFunctions(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 15 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolationFunctions(
				b0,
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiQuadraticQuadraticWedgeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiQuadraticQuadraticWedgeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	vtkBiQuadraticQuadraticWedge * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBiQuadraticQuadraticWedgeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBiQuadraticQuadraticWedgeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBiQuadraticQuadraticWedgeWrap *w = new VtkBiQuadraticQuadraticWedgeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBiQuadraticQuadraticWedgeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBiQuadraticQuadraticWedge * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBiQuadraticQuadraticWedgeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBiQuadraticQuadraticWedgeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBiQuadraticQuadraticWedgeWrap *w = new VtkBiQuadraticQuadraticWedgeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiQuadraticQuadraticWedgeWrap::Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiQuadraticQuadraticWedgeWrap *wrapper = ObjectWrap::Unwrap<VtkBiQuadraticQuadraticWedgeWrap>(info.Holder());
	vtkBiQuadraticQuadraticWedge *native = (vtkBiQuadraticQuadraticWedge *)wrapper->native.GetPointer();
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

