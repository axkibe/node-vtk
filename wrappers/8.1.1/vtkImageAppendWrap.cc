/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageAppendWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageAppendWrap::ptpl;

VtkImageAppendWrap::VtkImageAppendWrap()
{ }

VtkImageAppendWrap::VtkImageAppendWrap(vtkSmartPointer<vtkImageAppend> _native)
{ native = _native; }

VtkImageAppendWrap::~VtkImageAppendWrap()
{ }

void VtkImageAppendWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageAppend").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageAppend").ToLocalChecked(), ConstructorGetter);
}

void VtkImageAppendWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageAppendWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageAppendWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAppendAxis", GetAppendAxis);
	Nan::SetPrototypeMethod(tpl, "getAppendAxis", GetAppendAxis);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfInputs", GetNumberOfInputs);
	Nan::SetPrototypeMethod(tpl, "getNumberOfInputs", GetNumberOfInputs);

	Nan::SetPrototypeMethod(tpl, "GetPreserveExtents", GetPreserveExtents);
	Nan::SetPrototypeMethod(tpl, "getPreserveExtents", GetPreserveExtents);

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

#ifdef VTK_NODE_PLUS_VTKIMAGEAPPENDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGEAPPENDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkImageAppendWrap* obj = new VtkImageAppendWrap(native);
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
		VtkDataObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native = r;
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
	w->native = r;
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
	VtkImageAppendWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageAppendWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageAppendWrap *w = new VtkImageAppendWrap();
	w->native = r;
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

void VtkImageAppendWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAppendWrap *wrapper = ObjectWrap::Unwrap<VtkImageAppendWrap>(info.Holder());
	vtkImageAppend *native = (vtkImageAppend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageAppend * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageAppendWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageAppendWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageAppendWrap *w = new VtkImageAppendWrap();
		w->native = r;
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

