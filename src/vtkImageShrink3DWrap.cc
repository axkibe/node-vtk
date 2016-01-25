/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageShrink3DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageShrink3DWrap::constructor;

VtkImageShrink3DWrap::VtkImageShrink3DWrap()
{ }

VtkImageShrink3DWrap::VtkImageShrink3DWrap(vtkSmartPointer<vtkImageShrink3D> _native)
{ native = _native; }

VtkImageShrink3DWrap::~VtkImageShrink3DWrap()
{ }

void VtkImageShrink3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageShrink3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	VtkThreadedImageAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageShrink3D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageShrink3D").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageShrink3DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AveragingOff", AveragingOff);
	Nan::SetPrototypeMethod(tpl, "averagingOff", AveragingOff);

	Nan::SetPrototypeMethod(tpl, "AveragingOn", AveragingOn);
	Nan::SetPrototypeMethod(tpl, "averagingOn", AveragingOn);

	Nan::SetPrototypeMethod(tpl, "GetAveraging", GetAveraging);
	Nan::SetPrototypeMethod(tpl, "getAveraging", GetAveraging);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximum", GetMaximum);
	Nan::SetPrototypeMethod(tpl, "getMaximum", GetMaximum);

	Nan::SetPrototypeMethod(tpl, "GetMean", GetMean);
	Nan::SetPrototypeMethod(tpl, "getMean", GetMean);

	Nan::SetPrototypeMethod(tpl, "GetMedian", GetMedian);
	Nan::SetPrototypeMethod(tpl, "getMedian", GetMedian);

	Nan::SetPrototypeMethod(tpl, "GetMinimum", GetMinimum);
	Nan::SetPrototypeMethod(tpl, "getMinimum", GetMinimum);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MaximumOff", MaximumOff);
	Nan::SetPrototypeMethod(tpl, "maximumOff", MaximumOff);

	Nan::SetPrototypeMethod(tpl, "MaximumOn", MaximumOn);
	Nan::SetPrototypeMethod(tpl, "maximumOn", MaximumOn);

	Nan::SetPrototypeMethod(tpl, "MeanOff", MeanOff);
	Nan::SetPrototypeMethod(tpl, "meanOff", MeanOff);

	Nan::SetPrototypeMethod(tpl, "MeanOn", MeanOn);
	Nan::SetPrototypeMethod(tpl, "meanOn", MeanOn);

	Nan::SetPrototypeMethod(tpl, "MedianOff", MedianOff);
	Nan::SetPrototypeMethod(tpl, "medianOff", MedianOff);

	Nan::SetPrototypeMethod(tpl, "MedianOn", MedianOn);
	Nan::SetPrototypeMethod(tpl, "medianOn", MedianOn);

	Nan::SetPrototypeMethod(tpl, "MinimumOff", MinimumOff);
	Nan::SetPrototypeMethod(tpl, "minimumOff", MinimumOff);

	Nan::SetPrototypeMethod(tpl, "MinimumOn", MinimumOn);
	Nan::SetPrototypeMethod(tpl, "minimumOn", MinimumOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAveraging", SetAveraging);
	Nan::SetPrototypeMethod(tpl, "setAveraging", SetAveraging);

	Nan::SetPrototypeMethod(tpl, "SetMaximum", SetMaximum);
	Nan::SetPrototypeMethod(tpl, "setMaximum", SetMaximum);

	Nan::SetPrototypeMethod(tpl, "SetMean", SetMean);
	Nan::SetPrototypeMethod(tpl, "setMean", SetMean);

	Nan::SetPrototypeMethod(tpl, "SetMedian", SetMedian);
	Nan::SetPrototypeMethod(tpl, "setMedian", SetMedian);

	Nan::SetPrototypeMethod(tpl, "SetMinimum", SetMinimum);
	Nan::SetPrototypeMethod(tpl, "setMinimum", SetMinimum);

	Nan::SetPrototypeMethod(tpl, "SetShift", SetShift);
	Nan::SetPrototypeMethod(tpl, "setShift", SetShift);

	Nan::SetPrototypeMethod(tpl, "SetShrinkFactors", SetShrinkFactors);
	Nan::SetPrototypeMethod(tpl, "setShrinkFactors", SetShrinkFactors);

}

void VtkImageShrink3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageShrink3D> native = vtkSmartPointer<vtkImageShrink3D>::New();
		VtkImageShrink3DWrap* obj = new VtkImageShrink3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageShrink3DWrap::AveragingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AveragingOff();
}

void VtkImageShrink3DWrap::AveragingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AveragingOn();
}

void VtkImageShrink3DWrap::GetAveraging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAveraging();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageShrink3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageShrink3DWrap::GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageShrink3DWrap::GetMean(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMean();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageShrink3DWrap::GetMedian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMedian();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageShrink3DWrap::GetMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageShrink3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkImageShrink3DWrap::MaximumOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MaximumOff();
}

void VtkImageShrink3DWrap::MaximumOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MaximumOn();
}

void VtkImageShrink3DWrap::MeanOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MeanOff();
}

void VtkImageShrink3DWrap::MeanOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MeanOn();
}

void VtkImageShrink3DWrap::MedianOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MedianOff();
}

void VtkImageShrink3DWrap::MedianOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MedianOn();
}

void VtkImageShrink3DWrap::MinimumOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MinimumOff();
}

void VtkImageShrink3DWrap::MinimumOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MinimumOn();
}

void VtkImageShrink3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	vtkImageShrink3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageShrink3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageShrink3DWrap *w = new VtkImageShrink3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageShrink3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageShrink3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkImageShrink3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageShrink3DWrap *w = new VtkImageShrink3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageShrink3DWrap::SetAveraging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAveraging(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageShrink3DWrap::SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximum(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageShrink3DWrap::SetMean(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMean(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageShrink3DWrap::SetMedian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMedian(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageShrink3DWrap::SetMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimum(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageShrink3DWrap::SetShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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
				native->SetShift(
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

void VtkImageShrink3DWrap::SetShrinkFactors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageShrink3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageShrink3DWrap>(info.Holder());
	vtkImageShrink3D *native = (vtkImageShrink3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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
				native->SetShrinkFactors(
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

