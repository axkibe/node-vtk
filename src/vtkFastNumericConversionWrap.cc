/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkFastNumericConversionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkFastNumericConversionWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkFastNumericConversionWrap::ptpl;

VtkFastNumericConversionWrap::VtkFastNumericConversionWrap()
{ }

VtkFastNumericConversionWrap::VtkFastNumericConversionWrap(vtkSmartPointer<vtkFastNumericConversion> _native)
{ native = _native; }

VtkFastNumericConversionWrap::~VtkFastNumericConversionWrap()
{ }

void VtkFastNumericConversionWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkFastNumericConversionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkFastNumericConversion").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("FastNumericConversion").ToLocalChecked(),tpl->GetFunction());
}

void VtkFastNumericConversionWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RoundingTieBreaker", RoundingTieBreaker);
	Nan::SetPrototypeMethod(tpl, "roundingTieBreaker", RoundingTieBreaker);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetReservedFracBits", SetReservedFracBits);
	Nan::SetPrototypeMethod(tpl, "setReservedFracBits", SetReservedFracBits);

	Nan::SetPrototypeMethod(tpl, "TestConvertFixedPointFracPart", TestConvertFixedPointFracPart);
	Nan::SetPrototypeMethod(tpl, "testConvertFixedPointFracPart", TestConvertFixedPointFracPart);

	Nan::SetPrototypeMethod(tpl, "TestConvertFixedPointIntPart", TestConvertFixedPointIntPart);
	Nan::SetPrototypeMethod(tpl, "testConvertFixedPointIntPart", TestConvertFixedPointIntPart);

	Nan::SetPrototypeMethod(tpl, "TestQuickFloor", TestQuickFloor);
	Nan::SetPrototypeMethod(tpl, "testQuickFloor", TestQuickFloor);

	Nan::SetPrototypeMethod(tpl, "TestRound", TestRound);
	Nan::SetPrototypeMethod(tpl, "testRound", TestRound);

	Nan::SetPrototypeMethod(tpl, "TestSafeFloor", TestSafeFloor);
	Nan::SetPrototypeMethod(tpl, "testSafeFloor", TestSafeFloor);

}

void VtkFastNumericConversionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFastNumericConversion> native = vtkSmartPointer<vtkFastNumericConversion>::New();
		VtkFastNumericConversionWrap* obj = new VtkFastNumericConversionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFastNumericConversionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFastNumericConversionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
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

void VtkFastNumericConversionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	vtkFastNumericConversion * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFastNumericConversionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFastNumericConversionWrap *w = new VtkFastNumericConversionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFastNumericConversionWrap::RoundingTieBreaker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RoundingTieBreaker();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFastNumericConversionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFastNumericConversion * r;
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
			Nan::New<v8::Function>(VtkFastNumericConversionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFastNumericConversionWrap *w = new VtkFastNumericConversionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastNumericConversionWrap::SetReservedFracBits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReservedFracBits(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastNumericConversionWrap::TestConvertFixedPointFracPart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TestConvertFixedPointFracPart(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastNumericConversionWrap::TestConvertFixedPointIntPart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TestConvertFixedPointIntPart(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastNumericConversionWrap::TestQuickFloor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TestQuickFloor(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastNumericConversionWrap::TestRound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TestRound(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastNumericConversionWrap::TestSafeFloor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastNumericConversionWrap *wrapper = ObjectWrap::Unwrap<VtkFastNumericConversionWrap>(info.Holder());
	vtkFastNumericConversion *native = (vtkFastNumericConversion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TestSafeFloor(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

