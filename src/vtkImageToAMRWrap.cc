/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOverlappingAMRAlgorithmWrap.h"
#include "vtkImageToAMRWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageToAMRWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageToAMRWrap::ptpl;

VtkImageToAMRWrap::VtkImageToAMRWrap()
{ }

VtkImageToAMRWrap::VtkImageToAMRWrap(vtkSmartPointer<vtkImageToAMR> _native)
{ native = _native; }

VtkImageToAMRWrap::~VtkImageToAMRWrap()
{ }

void VtkImageToAMRWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOverlappingAMRAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOverlappingAMRAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageToAMRWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageToAMR").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageToAMR").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageToAMRWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfBlocks", GetMaximumNumberOfBlocks);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfBlocks", GetMaximumNumberOfBlocks);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfBlocksMaxValue", GetMaximumNumberOfBlocksMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfBlocksMaxValue", GetMaximumNumberOfBlocksMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfBlocksMinValue", GetMaximumNumberOfBlocksMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfBlocksMinValue", GetMaximumNumberOfBlocksMinValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLevels", GetNumberOfLevels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLevels", GetNumberOfLevels);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLevelsMaxValue", GetNumberOfLevelsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLevelsMaxValue", GetNumberOfLevelsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLevelsMinValue", GetNumberOfLevelsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLevelsMinValue", GetNumberOfLevelsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRefinementRatio", GetRefinementRatio);
	Nan::SetPrototypeMethod(tpl, "getRefinementRatio", GetRefinementRatio);

	Nan::SetPrototypeMethod(tpl, "GetRefinementRatioMaxValue", GetRefinementRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRefinementRatioMaxValue", GetRefinementRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRefinementRatioMinValue", GetRefinementRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getRefinementRatioMinValue", GetRefinementRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfBlocks", SetMaximumNumberOfBlocks);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfBlocks", SetMaximumNumberOfBlocks);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfLevels", SetNumberOfLevels);
	Nan::SetPrototypeMethod(tpl, "setNumberOfLevels", SetNumberOfLevels);

	Nan::SetPrototypeMethod(tpl, "SetRefinementRatio", SetRefinementRatio);
	Nan::SetPrototypeMethod(tpl, "setRefinementRatio", SetRefinementRatio);

}

void VtkImageToAMRWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageToAMR> native = vtkSmartPointer<vtkImageToAMR>::New();
		VtkImageToAMRWrap* obj = new VtkImageToAMRWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageToAMRWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageToAMRWrap::GetMaximumNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfBlocks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::GetMaximumNumberOfBlocksMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfBlocksMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::GetMaximumNumberOfBlocksMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfBlocksMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::GetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLevels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::GetNumberOfLevelsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLevelsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::GetNumberOfLevelsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLevelsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::GetRefinementRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRefinementRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::GetRefinementRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRefinementRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::GetRefinementRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRefinementRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToAMRWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
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

void VtkImageToAMRWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	vtkImageToAMR * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageToAMRWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageToAMRWrap *w = new VtkImageToAMRWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageToAMRWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageToAMR * r;
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
			Nan::New<v8::Function>(VtkImageToAMRWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageToAMRWrap *w = new VtkImageToAMRWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToAMRWrap::SetMaximumNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfBlocks(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToAMRWrap::SetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfLevels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToAMRWrap::SetRefinementRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToAMRWrap *wrapper = ObjectWrap::Unwrap<VtkImageToAMRWrap>(info.Holder());
	vtkImageToAMR *native = (vtkImageToAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRefinementRatio(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

