/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkImageDataGeometryFilterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageDataGeometryFilterWrap::ptpl;

VtkImageDataGeometryFilterWrap::VtkImageDataGeometryFilterWrap()
{ }

VtkImageDataGeometryFilterWrap::VtkImageDataGeometryFilterWrap(vtkSmartPointer<vtkImageDataGeometryFilter> _native)
{ native = _native; }

VtkImageDataGeometryFilterWrap::~VtkImageDataGeometryFilterWrap()
{ }

void VtkImageDataGeometryFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageDataGeometryFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageDataGeometryFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkImageDataGeometryFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageDataGeometryFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageDataGeometryFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputTriangles", GetOutputTriangles);
	Nan::SetPrototypeMethod(tpl, "getOutputTriangles", GetOutputTriangles);

	Nan::SetPrototypeMethod(tpl, "GetThresholdCells", GetThresholdCells);
	Nan::SetPrototypeMethod(tpl, "getThresholdCells", GetThresholdCells);

	Nan::SetPrototypeMethod(tpl, "GetThresholdValue", GetThresholdValue);
	Nan::SetPrototypeMethod(tpl, "getThresholdValue", GetThresholdValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutputTrianglesOff", OutputTrianglesOff);
	Nan::SetPrototypeMethod(tpl, "outputTrianglesOff", OutputTrianglesOff);

	Nan::SetPrototypeMethod(tpl, "OutputTrianglesOn", OutputTrianglesOn);
	Nan::SetPrototypeMethod(tpl, "outputTrianglesOn", OutputTrianglesOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExtent", SetExtent);
	Nan::SetPrototypeMethod(tpl, "setExtent", SetExtent);

	Nan::SetPrototypeMethod(tpl, "SetOutputTriangles", SetOutputTriangles);
	Nan::SetPrototypeMethod(tpl, "setOutputTriangles", SetOutputTriangles);

	Nan::SetPrototypeMethod(tpl, "SetThresholdCells", SetThresholdCells);
	Nan::SetPrototypeMethod(tpl, "setThresholdCells", SetThresholdCells);

	Nan::SetPrototypeMethod(tpl, "SetThresholdValue", SetThresholdValue);
	Nan::SetPrototypeMethod(tpl, "setThresholdValue", SetThresholdValue);

	Nan::SetPrototypeMethod(tpl, "ThresholdCellsOff", ThresholdCellsOff);
	Nan::SetPrototypeMethod(tpl, "thresholdCellsOff", ThresholdCellsOff);

	Nan::SetPrototypeMethod(tpl, "ThresholdCellsOn", ThresholdCellsOn);
	Nan::SetPrototypeMethod(tpl, "thresholdCellsOn", ThresholdCellsOn);

	Nan::SetPrototypeMethod(tpl, "ThresholdValueOff", ThresholdValueOff);
	Nan::SetPrototypeMethod(tpl, "thresholdValueOff", ThresholdValueOff);

	Nan::SetPrototypeMethod(tpl, "ThresholdValueOn", ThresholdValueOn);
	Nan::SetPrototypeMethod(tpl, "thresholdValueOn", ThresholdValueOn);

#ifdef VTK_NODE_PLUS_VTKIMAGEDATAGEOMETRYFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGEDATAGEOMETRYFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageDataGeometryFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageDataGeometryFilter> native = vtkSmartPointer<vtkImageDataGeometryFilter>::New();
		VtkImageDataGeometryFilterWrap* obj = new VtkImageDataGeometryFilterWrap(native);
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

void VtkImageDataGeometryFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDataGeometryFilterWrap::GetOutputTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputTriangles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataGeometryFilterWrap::GetThresholdCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThresholdCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataGeometryFilterWrap::GetThresholdValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThresholdValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataGeometryFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
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

void VtkImageDataGeometryFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	vtkImageDataGeometryFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageDataGeometryFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataGeometryFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataGeometryFilterWrap *w = new VtkImageDataGeometryFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDataGeometryFilterWrap::OutputTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutputTrianglesOff();
}

void VtkImageDataGeometryFilterWrap::OutputTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutputTrianglesOn();
}

void VtkImageDataGeometryFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageDataGeometryFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageDataGeometryFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataGeometryFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataGeometryFilterWrap *w = new VtkImageDataGeometryFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataGeometryFilterWrap::SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtent(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->SetExtent(
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
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataGeometryFilterWrap::SetOutputTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputTriangles(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataGeometryFilterWrap::SetThresholdCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThresholdCells(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataGeometryFilterWrap::SetThresholdValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThresholdValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataGeometryFilterWrap::ThresholdCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThresholdCellsOff();
}

void VtkImageDataGeometryFilterWrap::ThresholdCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThresholdCellsOn();
}

void VtkImageDataGeometryFilterWrap::ThresholdValueOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThresholdValueOff();
}

void VtkImageDataGeometryFilterWrap::ThresholdValueOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataGeometryFilterWrap>(info.Holder());
	vtkImageDataGeometryFilter *native = (vtkImageDataGeometryFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThresholdValueOn();
}

