/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkFlyingEdges2DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFlyingEdges2DWrap::ptpl;

VtkFlyingEdges2DWrap::VtkFlyingEdges2DWrap()
{ }

VtkFlyingEdges2DWrap::VtkFlyingEdges2DWrap(vtkSmartPointer<vtkFlyingEdges2D> _native)
{ native = _native; }

VtkFlyingEdges2DWrap::~VtkFlyingEdges2DWrap()
{ }

void VtkFlyingEdges2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFlyingEdges2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FlyingEdges2D").ToLocalChecked(), ConstructorGetter);
}

void VtkFlyingEdges2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFlyingEdges2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFlyingEdges2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeScalarsOff", ComputeScalarsOff);
	Nan::SetPrototypeMethod(tpl, "computeScalarsOff", ComputeScalarsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeScalarsOn", ComputeScalarsOn);
	Nan::SetPrototypeMethod(tpl, "computeScalarsOn", ComputeScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateValues", GenerateValues);
	Nan::SetPrototypeMethod(tpl, "generateValues", GenerateValues);

	Nan::SetPrototypeMethod(tpl, "GetArrayComponent", GetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "getArrayComponent", GetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "GetComputeScalars", GetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "getComputeScalars", GetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayComponent", SetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "setArrayComponent", SetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "SetComputeScalars", SetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "setComputeScalars", SetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

#ifdef VTK_NODE_PLUS_VTKFLYINGEDGES2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFLYINGEDGES2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFlyingEdges2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFlyingEdges2D> native = vtkSmartPointer<vtkFlyingEdges2D>::New();
		VtkFlyingEdges2DWrap* obj = new VtkFlyingEdges2DWrap(native);
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

void VtkFlyingEdges2DWrap::ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOff();
}

void VtkFlyingEdges2DWrap::ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOn();
}

void VtkFlyingEdges2DWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GenerateValues(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
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
			native->GenerateValues(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GenerateValues(
					info[0]->Int32Value(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdges2DWrap::GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFlyingEdges2DWrap::GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFlyingEdges2DWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFlyingEdges2DWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetValue(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdges2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	vtkFlyingEdges2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFlyingEdges2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFlyingEdges2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFlyingEdges2DWrap *w = new VtkFlyingEdges2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFlyingEdges2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkFlyingEdges2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkFlyingEdges2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFlyingEdges2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFlyingEdges2DWrap *w = new VtkFlyingEdges2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdges2DWrap::SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdges2DWrap::SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdges2DWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfContours(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdges2DWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdges2DWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdges2DWrap>(info.Holder());
	vtkFlyingEdges2D *native = (vtkFlyingEdges2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetValue(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

