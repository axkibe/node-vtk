/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCoincidentPointsWrap.h"
#include "vtkIdListWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCoincidentPointsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCoincidentPointsWrap::ptpl;

VtkCoincidentPointsWrap::VtkCoincidentPointsWrap()
{ }

VtkCoincidentPointsWrap::VtkCoincidentPointsWrap(vtkSmartPointer<vtkCoincidentPoints> _native)
{ native = _native; }

VtkCoincidentPointsWrap::~VtkCoincidentPointsWrap()
{ }

void VtkCoincidentPointsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkCoincidentPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkCoincidentPoints").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CoincidentPoints").ToLocalChecked(),tpl->GetFunction());
}

void VtkCoincidentPointsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Clear", Clear);
	Nan::SetPrototypeMethod(tpl, "clear", Clear);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNextCoincidentPointIds", GetNextCoincidentPointIds);
	Nan::SetPrototypeMethod(tpl, "getNextCoincidentPointIds", GetNextCoincidentPointIds);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveNonCoincidentPoints", RemoveNonCoincidentPoints);
	Nan::SetPrototypeMethod(tpl, "removeNonCoincidentPoints", RemoveNonCoincidentPoints);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkCoincidentPointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCoincidentPoints> native = vtkSmartPointer<vtkCoincidentPoints>::New();
		VtkCoincidentPointsWrap* obj = new VtkCoincidentPointsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCoincidentPointsWrap::Clear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentPointsWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentPointsWrap>(info.Holder());
	vtkCoincidentPoints *native = (vtkCoincidentPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Clear();
}

void VtkCoincidentPointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentPointsWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentPointsWrap>(info.Holder());
	vtkCoincidentPoints *native = (vtkCoincidentPoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCoincidentPointsWrap::GetNextCoincidentPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentPointsWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentPointsWrap>(info.Holder());
	vtkCoincidentPoints *native = (vtkCoincidentPoints *)wrapper->native.GetPointer();
	vtkIdList * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextCoincidentPointIds();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIdListWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListWrap *w = new VtkIdListWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoincidentPointsWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentPointsWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentPointsWrap>(info.Holder());
	vtkCoincidentPoints *native = (vtkCoincidentPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkCoincidentPointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentPointsWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentPointsWrap>(info.Holder());
	vtkCoincidentPoints *native = (vtkCoincidentPoints *)wrapper->native.GetPointer();
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

void VtkCoincidentPointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentPointsWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentPointsWrap>(info.Holder());
	vtkCoincidentPoints *native = (vtkCoincidentPoints *)wrapper->native.GetPointer();
	vtkCoincidentPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCoincidentPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoincidentPointsWrap *w = new VtkCoincidentPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoincidentPointsWrap::RemoveNonCoincidentPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentPointsWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentPointsWrap>(info.Holder());
	vtkCoincidentPoints *native = (vtkCoincidentPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveNonCoincidentPoints();
}

void VtkCoincidentPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoincidentPointsWrap *wrapper = ObjectWrap::Unwrap<VtkCoincidentPointsWrap>(info.Holder());
	vtkCoincidentPoints *native = (vtkCoincidentPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCoincidentPoints * r;
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
			Nan::New<v8::Function>(VtkCoincidentPointsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCoincidentPointsWrap *w = new VtkCoincidentPointsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
