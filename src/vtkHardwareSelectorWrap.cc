/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkHardwareSelectorWrap.h"
#include "vtkRendererWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkPropWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHardwareSelectorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHardwareSelectorWrap::ptpl;

VtkHardwareSelectorWrap::VtkHardwareSelectorWrap()
{ }

VtkHardwareSelectorWrap::VtkHardwareSelectorWrap(vtkSmartPointer<vtkHardwareSelector> _native)
{ native = _native; }

VtkHardwareSelectorWrap::~VtkHardwareSelectorWrap()
{ }

void VtkHardwareSelectorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkHardwareSelectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkHardwareSelector").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("HardwareSelector").ToLocalChecked(),tpl->GetFunction());
}

void VtkHardwareSelectorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BeginRenderProp", BeginRenderProp);
	Nan::SetPrototypeMethod(tpl, "beginRenderProp", BeginRenderProp);

	Nan::SetPrototypeMethod(tpl, "ClearBuffers", ClearBuffers);
	Nan::SetPrototypeMethod(tpl, "clearBuffers", ClearBuffers);

	Nan::SetPrototypeMethod(tpl, "EndRenderProp", EndRenderProp);
	Nan::SetPrototypeMethod(tpl, "endRenderProp", EndRenderProp);

	Nan::SetPrototypeMethod(tpl, "GenerateSelection", GenerateSelection);
	Nan::SetPrototypeMethod(tpl, "generateSelection", GenerateSelection);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentPass", GetCurrentPass);
	Nan::SetPrototypeMethod(tpl, "getCurrentPass", GetCurrentPass);

	Nan::SetPrototypeMethod(tpl, "GetFieldAssociation", GetFieldAssociation);
	Nan::SetPrototypeMethod(tpl, "getFieldAssociation", GetFieldAssociation);

	Nan::SetPrototypeMethod(tpl, "GetProcessID", GetProcessID);
	Nan::SetPrototypeMethod(tpl, "getProcessID", GetProcessID);

	Nan::SetPrototypeMethod(tpl, "GetPropFromID", GetPropFromID);
	Nan::SetPrototypeMethod(tpl, "getPropFromID", GetPropFromID);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Select", Select);
	Nan::SetPrototypeMethod(tpl, "select", Select);

	Nan::SetPrototypeMethod(tpl, "SetFieldAssociation", SetFieldAssociation);
	Nan::SetPrototypeMethod(tpl, "setFieldAssociation", SetFieldAssociation);

	Nan::SetPrototypeMethod(tpl, "SetProcessID", SetProcessID);
	Nan::SetPrototypeMethod(tpl, "setProcessID", SetProcessID);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

}

void VtkHardwareSelectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHardwareSelector> native = vtkSmartPointer<vtkHardwareSelector>::New();
		VtkHardwareSelectorWrap* obj = new VtkHardwareSelectorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHardwareSelectorWrap::BeginRenderProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BeginRenderProp();
}

void VtkHardwareSelectorWrap::ClearBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearBuffers();
}

void VtkHardwareSelectorWrap::EndRenderProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndRenderProp();
}

void VtkHardwareSelectorWrap::GenerateSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	vtkSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GenerateSelection();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSelectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionWrap *w = new VtkSelectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHardwareSelectorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHardwareSelectorWrap::GetCurrentPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentPass();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHardwareSelectorWrap::GetFieldAssociation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldAssociation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHardwareSelectorWrap::GetProcessID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHardwareSelectorWrap::GetPropFromID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkProp * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPropFromID(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPropWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPropWrap *w = new VtkPropWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRendererWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHardwareSelectorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
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

void VtkHardwareSelectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	vtkHardwareSelector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHardwareSelectorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHardwareSelectorWrap *w = new VtkHardwareSelectorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHardwareSelectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHardwareSelector * r;
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
			Nan::New<v8::Function>(VtkHardwareSelectorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHardwareSelectorWrap *w = new VtkHardwareSelectorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::Select(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	vtkSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Select();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSelectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionWrap *w = new VtkSelectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHardwareSelectorWrap::SetFieldAssociation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldAssociation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::SetProcessID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProcessID(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

