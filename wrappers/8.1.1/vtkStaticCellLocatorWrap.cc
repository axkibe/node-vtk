/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractCellLocatorWrap.h"
#include "vtkStaticCellLocatorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPointsWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPolyDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStaticCellLocatorWrap::ptpl;

VtkStaticCellLocatorWrap::VtkStaticCellLocatorWrap()
{ }

VtkStaticCellLocatorWrap::VtkStaticCellLocatorWrap(vtkSmartPointer<vtkStaticCellLocator> _native)
{ native = _native; }

VtkStaticCellLocatorWrap::~VtkStaticCellLocatorWrap()
{ }

void VtkStaticCellLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStaticCellLocator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StaticCellLocator").ToLocalChecked(), ConstructorGetter);
}

void VtkStaticCellLocatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStaticCellLocatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractCellLocatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractCellLocatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStaticCellLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetDivisions", GetDivisions);
	Nan::SetPrototypeMethod(tpl, "getDivisions", GetDivisions);

	Nan::SetPrototypeMethod(tpl, "GetLargeIds", GetLargeIds);
	Nan::SetPrototypeMethod(tpl, "getLargeIds", GetLargeIds);

	Nan::SetPrototypeMethod(tpl, "IntersectWithLine", IntersectWithLine);
	Nan::SetPrototypeMethod(tpl, "intersectWithLine", IntersectWithLine);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDivisions", SetDivisions);
	Nan::SetPrototypeMethod(tpl, "setDivisions", SetDivisions);

#ifdef VTK_NODE_PLUS_VTKSTATICCELLLOCATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSTATICCELLLOCATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkStaticCellLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStaticCellLocator> native = vtkSmartPointer<vtkStaticCellLocator>::New();
		VtkStaticCellLocatorWrap* obj = new VtkStaticCellLocatorWrap(native);
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

void VtkStaticCellLocatorWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkStaticCellLocatorWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkStaticCellLocatorWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GenerateRepresentation(
				info[0]->Int32Value(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStaticCellLocatorWrap::GetDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDivisions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkStaticCellLocatorWrap::GetLargeIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLargeIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStaticCellLocatorWrap::IntersectWithLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
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
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->IntersectWithLine(
						(double *)(a0->Buffer()->GetContents().Data()),
						(double *)(a1->Buffer()->GetContents().Data()),
						(vtkPoints *) a2->native.GetPointer(),
						(vtkIdList *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
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
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->IntersectWithLine(
						(double *)(a0->Buffer()->GetContents().Data()),
						b1,
						(vtkPoints *) a2->native.GetPointer(),
						(vtkIdList *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
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
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->IntersectWithLine(
						b0,
						b1,
						(vtkPoints *) a2->native.GetPointer(),
						(vtkIdList *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->IntersectWithLine(
						b0,
						(double *)(a1->Buffer()->GetContents().Data()),
						(vtkPoints *) a2->native.GetPointer(),
						(vtkIdList *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStaticCellLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
	vtkStaticCellLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkStaticCellLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStaticCellLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStaticCellLocatorWrap *w = new VtkStaticCellLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStaticCellLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkStaticCellLocator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkStaticCellLocatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStaticCellLocatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStaticCellLocatorWrap *w = new VtkStaticCellLocatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStaticCellLocatorWrap::SetDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLocatorWrap>(info.Holder());
	vtkStaticCellLocator *native = (vtkStaticCellLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDivisions(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDivisions(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetDivisions(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

