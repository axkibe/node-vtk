/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkCollapseGraphWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCollapseGraphWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCollapseGraphWrap::ptpl;

VtkCollapseGraphWrap::VtkCollapseGraphWrap()
{ }

VtkCollapseGraphWrap::VtkCollapseGraphWrap(vtkSmartPointer<vtkCollapseGraph> _native)
{ native = _native; }

VtkCollapseGraphWrap::~VtkCollapseGraphWrap()
{ }

void VtkCollapseGraphWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkCollapseGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkCollapseGraph").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CollapseGraph").ToLocalChecked(),tpl->GetFunction());
}

void VtkCollapseGraphWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGraphConnection", SetGraphConnection);
	Nan::SetPrototypeMethod(tpl, "setGraphConnection", SetGraphConnection);

	Nan::SetPrototypeMethod(tpl, "SetSelectionConnection", SetSelectionConnection);
	Nan::SetPrototypeMethod(tpl, "setSelectionConnection", SetSelectionConnection);

}

void VtkCollapseGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCollapseGraph> native = vtkSmartPointer<vtkCollapseGraph>::New();
		VtkCollapseGraphWrap* obj = new VtkCollapseGraphWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCollapseGraphWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollapseGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollapseGraphWrap>(info.Holder());
	vtkCollapseGraph *native = (vtkCollapseGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCollapseGraphWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollapseGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollapseGraphWrap>(info.Holder());
	vtkCollapseGraph *native = (vtkCollapseGraph *)wrapper->native.GetPointer();
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

void VtkCollapseGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollapseGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollapseGraphWrap>(info.Holder());
	vtkCollapseGraph *native = (vtkCollapseGraph *)wrapper->native.GetPointer();
	vtkCollapseGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCollapseGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCollapseGraphWrap *w = new VtkCollapseGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollapseGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollapseGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollapseGraphWrap>(info.Holder());
	vtkCollapseGraph *native = (vtkCollapseGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCollapseGraph * r;
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
			Nan::New<v8::Function>(VtkCollapseGraphWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCollapseGraphWrap *w = new VtkCollapseGraphWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCollapseGraphWrap::SetGraphConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollapseGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollapseGraphWrap>(info.Holder());
	vtkCollapseGraph *native = (vtkCollapseGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraphConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCollapseGraphWrap::SetSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollapseGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollapseGraphWrap>(info.Holder());
	vtkCollapseGraph *native = (vtkCollapseGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

