/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataCompressorWrap.h"
#include "vtkZLibDataCompressorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkZLibDataCompressorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkZLibDataCompressorWrap::ptpl;

VtkZLibDataCompressorWrap::VtkZLibDataCompressorWrap()
{ }

VtkZLibDataCompressorWrap::VtkZLibDataCompressorWrap(vtkSmartPointer<vtkZLibDataCompressor> _native)
{ native = _native; }

VtkZLibDataCompressorWrap::~VtkZLibDataCompressorWrap()
{ }

void VtkZLibDataCompressorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkZLibDataCompressor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ZLibDataCompressor").ToLocalChecked(), ConstructorGetter);
}

void VtkZLibDataCompressorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkZLibDataCompressorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataCompressorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataCompressorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkZLibDataCompressorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompressionLevel", GetCompressionLevel);
	Nan::SetPrototypeMethod(tpl, "getCompressionLevel", GetCompressionLevel);

	Nan::SetPrototypeMethod(tpl, "GetCompressionLevelMaxValue", GetCompressionLevelMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCompressionLevelMaxValue", GetCompressionLevelMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCompressionLevelMinValue", GetCompressionLevelMinValue);
	Nan::SetPrototypeMethod(tpl, "getCompressionLevelMinValue", GetCompressionLevelMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompressionLevel", SetCompressionLevel);
	Nan::SetPrototypeMethod(tpl, "setCompressionLevel", SetCompressionLevel);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkZLibDataCompressorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkZLibDataCompressor> native = vtkSmartPointer<vtkZLibDataCompressor>::New();
		VtkZLibDataCompressorWrap* obj = new VtkZLibDataCompressorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkZLibDataCompressorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkZLibDataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkZLibDataCompressorWrap>(info.Holder());
	vtkZLibDataCompressor *native = (vtkZLibDataCompressor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkZLibDataCompressorWrap::GetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkZLibDataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkZLibDataCompressorWrap>(info.Holder());
	vtkZLibDataCompressor *native = (vtkZLibDataCompressor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressionLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkZLibDataCompressorWrap::GetCompressionLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkZLibDataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkZLibDataCompressorWrap>(info.Holder());
	vtkZLibDataCompressor *native = (vtkZLibDataCompressor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressionLevelMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkZLibDataCompressorWrap::GetCompressionLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkZLibDataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkZLibDataCompressorWrap>(info.Holder());
	vtkZLibDataCompressor *native = (vtkZLibDataCompressor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressionLevelMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkZLibDataCompressorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkZLibDataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkZLibDataCompressorWrap>(info.Holder());
	vtkZLibDataCompressor *native = (vtkZLibDataCompressor *)wrapper->native.GetPointer();
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

void VtkZLibDataCompressorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkZLibDataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkZLibDataCompressorWrap>(info.Holder());
	vtkZLibDataCompressor *native = (vtkZLibDataCompressor *)wrapper->native.GetPointer();
	vtkZLibDataCompressor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkZLibDataCompressorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkZLibDataCompressorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkZLibDataCompressorWrap *w = new VtkZLibDataCompressorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkZLibDataCompressorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkZLibDataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkZLibDataCompressorWrap>(info.Holder());
	vtkZLibDataCompressor *native = (vtkZLibDataCompressor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkZLibDataCompressor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkZLibDataCompressorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkZLibDataCompressorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkZLibDataCompressorWrap *w = new VtkZLibDataCompressorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkZLibDataCompressorWrap::SetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkZLibDataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkZLibDataCompressorWrap>(info.Holder());
	vtkZLibDataCompressor *native = (vtkZLibDataCompressor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompressionLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

