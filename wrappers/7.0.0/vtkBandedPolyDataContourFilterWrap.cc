/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkBandedPolyDataContourFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBandedPolyDataContourFilterWrap::ptpl;

VtkBandedPolyDataContourFilterWrap::VtkBandedPolyDataContourFilterWrap()
{ }

VtkBandedPolyDataContourFilterWrap::VtkBandedPolyDataContourFilterWrap(vtkSmartPointer<vtkBandedPolyDataContourFilter> _native)
{ native = _native; }

VtkBandedPolyDataContourFilterWrap::~VtkBandedPolyDataContourFilterWrap()
{ }

void VtkBandedPolyDataContourFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBandedPolyDataContourFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BandedPolyDataContourFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkBandedPolyDataContourFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBandedPolyDataContourFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBandedPolyDataContourFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClippingOff", ClippingOff);
	Nan::SetPrototypeMethod(tpl, "clippingOff", ClippingOff);

	Nan::SetPrototypeMethod(tpl, "ClippingOn", ClippingOn);
	Nan::SetPrototypeMethod(tpl, "clippingOn", ClippingOn);

	Nan::SetPrototypeMethod(tpl, "GenerateContourEdgesOff", GenerateContourEdgesOff);
	Nan::SetPrototypeMethod(tpl, "generateContourEdgesOff", GenerateContourEdgesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateContourEdgesOn", GenerateContourEdgesOn);
	Nan::SetPrototypeMethod(tpl, "generateContourEdgesOn", GenerateContourEdgesOn);

	Nan::SetPrototypeMethod(tpl, "GenerateValues", GenerateValues);
	Nan::SetPrototypeMethod(tpl, "generateValues", GenerateValues);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipTolerance", GetClipTolerance);
	Nan::SetPrototypeMethod(tpl, "getClipTolerance", GetClipTolerance);

	Nan::SetPrototypeMethod(tpl, "GetClipping", GetClipping);
	Nan::SetPrototypeMethod(tpl, "getClipping", GetClipping);

	Nan::SetPrototypeMethod(tpl, "GetContourEdgesOutput", GetContourEdgesOutput);
	Nan::SetPrototypeMethod(tpl, "getContourEdgesOutput", GetContourEdgesOutput);

	Nan::SetPrototypeMethod(tpl, "GetGenerateContourEdges", GetGenerateContourEdges);
	Nan::SetPrototypeMethod(tpl, "getGenerateContourEdges", GetGenerateContourEdges);

	Nan::SetPrototypeMethod(tpl, "GetMTime", GetMTime);
	Nan::SetPrototypeMethod(tpl, "getMTime", GetMTime);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetScalarMode", GetScalarMode);
	Nan::SetPrototypeMethod(tpl, "getScalarMode", GetScalarMode);

	Nan::SetPrototypeMethod(tpl, "GetScalarModeMaxValue", GetScalarModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getScalarModeMaxValue", GetScalarModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetScalarModeMinValue", GetScalarModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getScalarModeMinValue", GetScalarModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClipTolerance", SetClipTolerance);
	Nan::SetPrototypeMethod(tpl, "setClipTolerance", SetClipTolerance);

	Nan::SetPrototypeMethod(tpl, "SetClipping", SetClipping);
	Nan::SetPrototypeMethod(tpl, "setClipping", SetClipping);

	Nan::SetPrototypeMethod(tpl, "SetGenerateContourEdges", SetGenerateContourEdges);
	Nan::SetPrototypeMethod(tpl, "setGenerateContourEdges", SetGenerateContourEdges);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetScalarMode", SetScalarMode);
	Nan::SetPrototypeMethod(tpl, "setScalarMode", SetScalarMode);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToIndex", SetScalarModeToIndex);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToIndex", SetScalarModeToIndex);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToValue", SetScalarModeToValue);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToValue", SetScalarModeToValue);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

#ifdef VTK_NODE_PLUS_VTKBANDEDPOLYDATACONTOURFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBANDEDPOLYDATACONTOURFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBandedPolyDataContourFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBandedPolyDataContourFilter> native = vtkSmartPointer<vtkBandedPolyDataContourFilter>::New();
		VtkBandedPolyDataContourFilterWrap* obj = new VtkBandedPolyDataContourFilterWrap(native);
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

void VtkBandedPolyDataContourFilterWrap::ClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClippingOff();
}

void VtkBandedPolyDataContourFilterWrap::ClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClippingOn();
}

void VtkBandedPolyDataContourFilterWrap::GenerateContourEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateContourEdgesOff();
}

void VtkBandedPolyDataContourFilterWrap::GenerateContourEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateContourEdgesOn();
}

void VtkBandedPolyDataContourFilterWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
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

void VtkBandedPolyDataContourFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBandedPolyDataContourFilterWrap::GetClipTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBandedPolyDataContourFilterWrap::GetClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBandedPolyDataContourFilterWrap::GetContourEdgesOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContourEdgesOutput();
	VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBandedPolyDataContourFilterWrap::GetGenerateContourEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateContourEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBandedPolyDataContourFilterWrap::GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBandedPolyDataContourFilterWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBandedPolyDataContourFilterWrap::GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBandedPolyDataContourFilterWrap::GetScalarModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBandedPolyDataContourFilterWrap::GetScalarModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBandedPolyDataContourFilterWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
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

void VtkBandedPolyDataContourFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
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

void VtkBandedPolyDataContourFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	vtkBandedPolyDataContourFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBandedPolyDataContourFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBandedPolyDataContourFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBandedPolyDataContourFilterWrap *w = new VtkBandedPolyDataContourFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBandedPolyDataContourFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBandedPolyDataContourFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkBandedPolyDataContourFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBandedPolyDataContourFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBandedPolyDataContourFilterWrap *w = new VtkBandedPolyDataContourFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBandedPolyDataContourFilterWrap::SetClipTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBandedPolyDataContourFilterWrap::SetClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBandedPolyDataContourFilterWrap::SetGenerateContourEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateContourEdges(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBandedPolyDataContourFilterWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
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

void VtkBandedPolyDataContourFilterWrap::SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBandedPolyDataContourFilterWrap::SetScalarModeToIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToIndex();
}

void VtkBandedPolyDataContourFilterWrap::SetScalarModeToValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToValue();
}

void VtkBandedPolyDataContourFilterWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBandedPolyDataContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkBandedPolyDataContourFilterWrap>(info.Holder());
	vtkBandedPolyDataContourFilter *native = (vtkBandedPolyDataContourFilter *)wrapper->native.GetPointer();
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

