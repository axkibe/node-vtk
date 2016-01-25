/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGenericEdgeTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGenericEdgeTableWrap::constructor;

VtkGenericEdgeTableWrap::VtkGenericEdgeTableWrap()
{ }

VtkGenericEdgeTableWrap::VtkGenericEdgeTableWrap(vtkSmartPointer<vtkGenericEdgeTable> _native)
{ native = _native; }

VtkGenericEdgeTableWrap::~VtkGenericEdgeTableWrap()
{ }

void VtkGenericEdgeTableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkGenericEdgeTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkGenericEdgeTable").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GenericEdgeTable").ToLocalChecked(),tpl->GetFunction());
}

void VtkGenericEdgeTableWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DumpTable", DumpTable);
	Nan::SetPrototypeMethod(tpl, "dumpTable", DumpTable);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponents", GetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponents", GetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LoadFactor", LoadFactor);
	Nan::SetPrototypeMethod(tpl, "loadFactor", LoadFactor);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfComponents", SetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "setNumberOfComponents", SetNumberOfComponents);

}

void VtkGenericEdgeTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericEdgeTable> native = vtkSmartPointer<vtkGenericEdgeTable>::New();
		VtkGenericEdgeTableWrap* obj = new VtkGenericEdgeTableWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericEdgeTableWrap::DumpTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkGenericEdgeTableWrap>(info.Holder());
	vtkGenericEdgeTable *native = (vtkGenericEdgeTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DumpTable();
}

void VtkGenericEdgeTableWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkGenericEdgeTableWrap>(info.Holder());
	vtkGenericEdgeTable *native = (vtkGenericEdgeTable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericEdgeTableWrap::GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkGenericEdgeTableWrap>(info.Holder());
	vtkGenericEdgeTable *native = (vtkGenericEdgeTable *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericEdgeTableWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkGenericEdgeTableWrap>(info.Holder());
	vtkGenericEdgeTable *native = (vtkGenericEdgeTable *)wrapper->native.GetPointer();
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

void VtkGenericEdgeTableWrap::LoadFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkGenericEdgeTableWrap>(info.Holder());
	vtkGenericEdgeTable *native = (vtkGenericEdgeTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LoadFactor();
}

void VtkGenericEdgeTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkGenericEdgeTableWrap>(info.Holder());
	vtkGenericEdgeTable *native = (vtkGenericEdgeTable *)wrapper->native.GetPointer();
	vtkGenericEdgeTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGenericEdgeTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericEdgeTableWrap *w = new VtkGenericEdgeTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericEdgeTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkGenericEdgeTableWrap>(info.Holder());
	vtkGenericEdgeTable *native = (vtkGenericEdgeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericEdgeTable * r;
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
			Nan::New<v8::Function>(VtkGenericEdgeTableWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericEdgeTableWrap *w = new VtkGenericEdgeTableWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericEdgeTableWrap::SetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkGenericEdgeTableWrap>(info.Holder());
	vtkGenericEdgeTable *native = (vtkGenericEdgeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfComponents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

