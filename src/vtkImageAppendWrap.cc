/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageAppendWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageAppendWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageAppendWrap::ptpl;

VtkImageAppendWrap::VtkImageAppendWrap()
{ }

VtkImageAppendWrap::VtkImageAppendWrap(vtkSmartPointer<vtkImageAppend> _native)
{ native = _native; }

VtkImageAppendWrap::~VtkImageAppendWrap()
{ }

void VtkImageAppendWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageAppendWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageAppend").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageAppend").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageAppendWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetAppendAxis", GetAppendAxis);
	Nan::SetPrototypeMethod(tpl, "getAppendAxis", GetAppendAxis);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfInputs", GetNumberOfInputs);
	Nan::SetPrototypeMethod(tpl, "getNumberOfInputs", GetNumberOfInputs);

	Nan::SetPrototypeMethod(tpl, "GetPreserveExtents", GetPreserveExtents);
	Nan::SetPrototypeMethod(tpl, "getPreserveExtents", GetPreserveExtents);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreserveExtentsOff", PreserveExtentsOff);
	Nan::SetPrototypeMethod(tpl, "preserveExtentsOff", PreserveExtentsOff);

	Nan::SetPrototypeMethod(tpl, "PreserveExtentsOn", PreserveExtentsOn);
	Nan::SetPrototypeMethod(tpl, "preserveExtentsOn", PreserveExtentsOn);

	Nan::SetPrototypeMethod(tpl, "ReplaceNthInputConnection", ReplaceNthInputConnection);
	Nan::SetPrototypeMethod(tpl, "replaceNthInputConnection", ReplaceNthInputConnection);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAppendAxis", SetAppendAxis);
	Nan::SetPrototypeMethod(tpl, "setAppendAxis", SetAppendAxis);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetPreserveExtents", SetPreserveExtents);
	Nan::SetPrototypeMethod(tpl, "setPreserveExtents", SetPreserveExtents);

}

void VtkImageAppendWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageAppend> native = vtkSmartPointer<vtkImageAppend>::New();
		VtkImageAppendWrap* obj = new VtkImageAppendWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageAppendWrap::GetAppendAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAppendAxis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAppendWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageAppendWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageAppendWrap::GetNumberOfInputs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfInputs();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAppendWrap::GetPreserveExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreserveExtents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAppendWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
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

void VtkImageAppendWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	vtkImageAppend * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageAppendWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageAppendWrap *w = new VtkImageAppendWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageAppendWrap::PreserveExtentsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveExtentsOff();
}

void VtkImageAppendWrap::PreserveExtentsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveExtentsOn();
}

void VtkImageAppendWrap::ReplaceNthInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkImageAppendWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageAppend * r;
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
			Nan::New<v8::Function>(VtkImageAppendWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageAppendWrap *w = new VtkImageAppendWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAppendWrap::SetAppendAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAppendAxis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAppendWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkImageAppendWrap::SetPreserveExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreserveExtents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

