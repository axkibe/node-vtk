/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageBlendWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkImageStencilDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageBlendWrap::ptpl;

VtkImageBlendWrap::VtkImageBlendWrap()
{ }

VtkImageBlendWrap::VtkImageBlendWrap(vtkSmartPointer<vtkImageBlend> _native)
{ native = _native; }

VtkImageBlendWrap::~VtkImageBlendWrap()
{ }

void VtkImageBlendWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageBlend").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageBlend").ToLocalChecked(), ConstructorGetter);
}

void VtkImageBlendWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageBlendWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageBlendWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBlendMode", GetBlendMode);
	Nan::SetPrototypeMethod(tpl, "getBlendMode", GetBlendMode);

	Nan::SetPrototypeMethod(tpl, "GetBlendModeAsString", GetBlendModeAsString);
	Nan::SetPrototypeMethod(tpl, "getBlendModeAsString", GetBlendModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetBlendModeMaxValue", GetBlendModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getBlendModeMaxValue", GetBlendModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetBlendModeMinValue", GetBlendModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getBlendModeMinValue", GetBlendModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompoundThreshold", GetCompoundThreshold);
	Nan::SetPrototypeMethod(tpl, "getCompoundThreshold", GetCompoundThreshold);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfInputs", GetNumberOfInputs);
	Nan::SetPrototypeMethod(tpl, "getNumberOfInputs", GetNumberOfInputs);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetStencil", GetStencil);
	Nan::SetPrototypeMethod(tpl, "getStencil", GetStencil);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReplaceNthInputConnection", ReplaceNthInputConnection);
	Nan::SetPrototypeMethod(tpl, "replaceNthInputConnection", ReplaceNthInputConnection);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBlendMode", SetBlendMode);
	Nan::SetPrototypeMethod(tpl, "setBlendMode", SetBlendMode);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToCompound", SetBlendModeToCompound);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToCompound", SetBlendModeToCompound);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToNormal", SetBlendModeToNormal);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToNormal", SetBlendModeToNormal);

	Nan::SetPrototypeMethod(tpl, "SetCompoundThreshold", SetCompoundThreshold);
	Nan::SetPrototypeMethod(tpl, "setCompoundThreshold", SetCompoundThreshold);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetOpacity", SetOpacity);
	Nan::SetPrototypeMethod(tpl, "setOpacity", SetOpacity);

	Nan::SetPrototypeMethod(tpl, "SetStencilConnection", SetStencilConnection);
	Nan::SetPrototypeMethod(tpl, "setStencilConnection", SetStencilConnection);

	Nan::SetPrototypeMethod(tpl, "SetStencilData", SetStencilData);
	Nan::SetPrototypeMethod(tpl, "setStencilData", SetStencilData);

	ptpl.Reset( tpl );
}

void VtkImageBlendWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageBlend> native = vtkSmartPointer<vtkImageBlend>::New();
		VtkImageBlendWrap* obj = new VtkImageBlendWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageBlendWrap::GetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlendMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBlendWrap::GetBlendModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlendModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageBlendWrap::GetBlendModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlendModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBlendWrap::GetBlendModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlendModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBlendWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageBlendWrap::GetCompoundThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompoundThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBlendWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInput(
			info[0]->Int32Value()
		);
			VtkDataObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageBlendWrap::GetNumberOfInputs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfInputs();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBlendWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOpacity(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBlendWrap::GetStencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	vtkImageStencilData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStencil();
		VtkImageStencilDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageStencilDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageStencilDataWrap *w = new VtkImageStencilDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageBlendWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
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

void VtkImageBlendWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	vtkImageBlend * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageBlendWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageBlendWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageBlendWrap *w = new VtkImageBlendWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageBlendWrap::ReplaceNthInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[1]))
		{
			VtkAlgorithmOutputWrap *a1 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ReplaceNthInputConnection(
				info[0]->Int32Value(),
				(vtkAlgorithmOutput *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBlendWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageBlend * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageBlendWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageBlendWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageBlendWrap *w = new VtkImageBlendWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBlendWrap::SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBlendMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBlendWrap::SetBlendModeToCompound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToCompound();
}

void VtkImageBlendWrap::SetBlendModeToNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToNormal();
}

void VtkImageBlendWrap::SetCompoundThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompoundThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBlendWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputData(
				info[0]->Int32Value(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBlendWrap::SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOpacity(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBlendWrap::SetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStencilConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBlendWrap::SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBlendWrap *wrapper = ObjectWrap::Unwrap<VtkImageBlendWrap>(info.Holder());
	vtkImageBlend *native = (vtkImageBlend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageStencilDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageStencilDataWrap *a0 = ObjectWrap::Unwrap<VtkImageStencilDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStencilData(
			(vtkImageStencilData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

