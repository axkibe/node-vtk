/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGL2PSUtilitiesWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkRenderWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGL2PSUtilitiesWrap::constructor;

VtkGL2PSUtilitiesWrap::VtkGL2PSUtilitiesWrap()
{ }

VtkGL2PSUtilitiesWrap::VtkGL2PSUtilitiesWrap(vtkSmartPointer<vtkGL2PSUtilities> _native)
{ native = _native; }

VtkGL2PSUtilitiesWrap::~VtkGL2PSUtilitiesWrap()
{ }

void VtkGL2PSUtilitiesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkGL2PSUtilitiesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkGL2PSUtilities").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GL2PSUtilities").ToLocalChecked(),tpl->GetFunction());
}

void VtkGL2PSUtilitiesWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetRenderWindow", GetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "getRenderWindow", GetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "TextPropertyToGL2PSAlignment", TextPropertyToGL2PSAlignment);
	Nan::SetPrototypeMethod(tpl, "textPropertyToGL2PSAlignment", TextPropertyToGL2PSAlignment);

	Nan::SetPrototypeMethod(tpl, "TextPropertyToPSFontName", TextPropertyToPSFontName);
	Nan::SetPrototypeMethod(tpl, "textPropertyToPSFontName", TextPropertyToPSFontName);

}

void VtkGL2PSUtilitiesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGL2PSUtilities> native = vtkSmartPointer<vtkGL2PSUtilities>::New();
		VtkGL2PSUtilitiesWrap* obj = new VtkGL2PSUtilitiesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGL2PSUtilitiesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGL2PSUtilitiesWrap::GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	vtkRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderWindow();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRenderWindowWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowWrap *w = new VtkRenderWindowWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGL2PSUtilitiesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
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

void VtkGL2PSUtilitiesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	vtkGL2PSUtilities * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGL2PSUtilitiesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGL2PSUtilitiesWrap *w = new VtkGL2PSUtilitiesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGL2PSUtilitiesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGL2PSUtilities * r;
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
			Nan::New<v8::Function>(VtkGL2PSUtilitiesWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGL2PSUtilitiesWrap *w = new VtkGL2PSUtilitiesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGL2PSUtilitiesWrap::TextPropertyToGL2PSAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TextPropertyToGL2PSAlignment(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGL2PSUtilitiesWrap::TextPropertyToPSFontName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TextPropertyToPSFontName(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

