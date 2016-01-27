/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkStringToCategoryWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStringToCategoryWrap::ptpl;

VtkStringToCategoryWrap::VtkStringToCategoryWrap()
{ }

VtkStringToCategoryWrap::VtkStringToCategoryWrap(vtkSmartPointer<vtkStringToCategory> _native)
{ native = _native; }

VtkStringToCategoryWrap::~VtkStringToCategoryWrap()
{ }

void VtkStringToCategoryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStringToCategory").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StringToCategory").ToLocalChecked(), ConstructorGetter);
}

void VtkStringToCategoryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStringToCategoryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStringToCategoryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCategoryArrayName", GetCategoryArrayName);
	Nan::SetPrototypeMethod(tpl, "getCategoryArrayName", GetCategoryArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCategoryArrayName", SetCategoryArrayName);
	Nan::SetPrototypeMethod(tpl, "setCategoryArrayName", SetCategoryArrayName);

	ptpl.Reset( tpl );
}

void VtkStringToCategoryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStringToCategory> native = vtkSmartPointer<vtkStringToCategory>::New();
		VtkStringToCategoryWrap* obj = new VtkStringToCategoryWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStringToCategoryWrap::GetCategoryArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStringToCategoryWrap *wrapper = ObjectWrap::Unwrap<VtkStringToCategoryWrap>(info.Holder());
	vtkStringToCategory *native = (vtkStringToCategory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCategoryArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStringToCategoryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStringToCategoryWrap *wrapper = ObjectWrap::Unwrap<VtkStringToCategoryWrap>(info.Holder());
	vtkStringToCategory *native = (vtkStringToCategory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStringToCategoryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStringToCategoryWrap *wrapper = ObjectWrap::Unwrap<VtkStringToCategoryWrap>(info.Holder());
	vtkStringToCategory *native = (vtkStringToCategory *)wrapper->native.GetPointer();
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

void VtkStringToCategoryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStringToCategoryWrap *wrapper = ObjectWrap::Unwrap<VtkStringToCategoryWrap>(info.Holder());
	vtkStringToCategory *native = (vtkStringToCategory *)wrapper->native.GetPointer();
	vtkStringToCategory * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStringToCategoryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringToCategoryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringToCategoryWrap *w = new VtkStringToCategoryWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStringToCategoryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStringToCategoryWrap *wrapper = ObjectWrap::Unwrap<VtkStringToCategoryWrap>(info.Holder());
	vtkStringToCategory *native = (vtkStringToCategory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStringToCategory * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStringToCategoryWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStringToCategoryWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStringToCategoryWrap *w = new VtkStringToCategoryWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStringToCategoryWrap::SetCategoryArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStringToCategoryWrap *wrapper = ObjectWrap::Unwrap<VtkStringToCategoryWrap>(info.Holder());
	vtkStringToCategory *native = (vtkStringToCategory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCategoryArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

