/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkImageReader2FactoryWrap.h"
#include "vtkImageReader2Wrap.h"
#include "vtkImageReader2CollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageReader2FactoryWrap::ptpl;

VtkImageReader2FactoryWrap::VtkImageReader2FactoryWrap()
{ }

VtkImageReader2FactoryWrap::VtkImageReader2FactoryWrap(vtkSmartPointer<vtkImageReader2Factory> _native)
{ native = _native; }

VtkImageReader2FactoryWrap::~VtkImageReader2FactoryWrap()
{ }

void VtkImageReader2FactoryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageReader2Factory").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageReader2Factory").ToLocalChecked(), ConstructorGetter);
}

void VtkImageReader2FactoryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageReader2FactoryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageReader2FactoryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateImageReader2", CreateImageReader2);
	Nan::SetPrototypeMethod(tpl, "createImageReader2", CreateImageReader2);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetRegisteredReaders", GetRegisteredReaders);
	Nan::SetPrototypeMethod(tpl, "getRegisteredReaders", GetRegisteredReaders);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RegisterReader", RegisterReader);
	Nan::SetPrototypeMethod(tpl, "registerReader", RegisterReader);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkImageReader2FactoryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageReader2Factory> native = vtkSmartPointer<vtkImageReader2Factory>::New();
		VtkImageReader2FactoryWrap* obj = new VtkImageReader2FactoryWrap(native);
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

void VtkImageReader2FactoryWrap::CreateImageReader2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReader2FactoryWrap *wrapper = ObjectWrap::Unwrap<VtkImageReader2FactoryWrap>(info.Holder());
	vtkImageReader2Factory *native = (vtkImageReader2Factory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkImageReader2 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CreateImageReader2(
			*a0
		);
			VtkImageReader2Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageReader2Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageReader2Wrap *w = new VtkImageReader2Wrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReader2FactoryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReader2FactoryWrap *wrapper = ObjectWrap::Unwrap<VtkImageReader2FactoryWrap>(info.Holder());
	vtkImageReader2Factory *native = (vtkImageReader2Factory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageReader2FactoryWrap::GetRegisteredReaders(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReader2FactoryWrap *wrapper = ObjectWrap::Unwrap<VtkImageReader2FactoryWrap>(info.Holder());
	vtkImageReader2Factory *native = (vtkImageReader2Factory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageReader2CollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageReader2CollectionWrap *a0 = ObjectWrap::Unwrap<VtkImageReader2CollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetRegisteredReaders(
			(vtkImageReader2Collection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReader2FactoryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReader2FactoryWrap *wrapper = ObjectWrap::Unwrap<VtkImageReader2FactoryWrap>(info.Holder());
	vtkImageReader2Factory *native = (vtkImageReader2Factory *)wrapper->native.GetPointer();
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

void VtkImageReader2FactoryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReader2FactoryWrap *wrapper = ObjectWrap::Unwrap<VtkImageReader2FactoryWrap>(info.Holder());
	vtkImageReader2Factory *native = (vtkImageReader2Factory *)wrapper->native.GetPointer();
	vtkImageReader2Factory * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageReader2FactoryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageReader2FactoryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageReader2FactoryWrap *w = new VtkImageReader2FactoryWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageReader2FactoryWrap::RegisterReader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReader2FactoryWrap *wrapper = ObjectWrap::Unwrap<VtkImageReader2FactoryWrap>(info.Holder());
	vtkImageReader2Factory *native = (vtkImageReader2Factory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageReader2Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageReader2Wrap *a0 = ObjectWrap::Unwrap<VtkImageReader2Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RegisterReader(
			(vtkImageReader2 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReader2FactoryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReader2FactoryWrap *wrapper = ObjectWrap::Unwrap<VtkImageReader2FactoryWrap>(info.Holder());
	vtkImageReader2Factory *native = (vtkImageReader2Factory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageReader2Factory * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageReader2FactoryWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageReader2FactoryWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageReader2FactoryWrap *w = new VtkImageReader2FactoryWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

