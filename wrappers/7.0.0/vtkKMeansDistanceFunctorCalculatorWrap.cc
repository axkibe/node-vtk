/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkKMeansDistanceFunctorWrap.h"
#include "vtkKMeansDistanceFunctorCalculatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkFunctionParserWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkKMeansDistanceFunctorCalculatorWrap::ptpl;

VtkKMeansDistanceFunctorCalculatorWrap::VtkKMeansDistanceFunctorCalculatorWrap()
{ }

VtkKMeansDistanceFunctorCalculatorWrap::VtkKMeansDistanceFunctorCalculatorWrap(vtkSmartPointer<vtkKMeansDistanceFunctorCalculator> _native)
{ native = _native; }

VtkKMeansDistanceFunctorCalculatorWrap::~VtkKMeansDistanceFunctorCalculatorWrap()
{ }

void VtkKMeansDistanceFunctorCalculatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkKMeansDistanceFunctorCalculator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("KMeansDistanceFunctorCalculator").ToLocalChecked(), ConstructorGetter);
}

void VtkKMeansDistanceFunctorCalculatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkKMeansDistanceFunctorCalculatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkKMeansDistanceFunctorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkKMeansDistanceFunctorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkKMeansDistanceFunctorCalculatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistanceExpression", GetDistanceExpression);
	Nan::SetPrototypeMethod(tpl, "getDistanceExpression", GetDistanceExpression);

	Nan::SetPrototypeMethod(tpl, "GetFunctionParser", GetFunctionParser);
	Nan::SetPrototypeMethod(tpl, "getFunctionParser", GetFunctionParser);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDistanceExpression", SetDistanceExpression);
	Nan::SetPrototypeMethod(tpl, "setDistanceExpression", SetDistanceExpression);

	Nan::SetPrototypeMethod(tpl, "SetFunctionParser", SetFunctionParser);
	Nan::SetPrototypeMethod(tpl, "setFunctionParser", SetFunctionParser);

#ifdef VTK_NODE_PLUS_VTKKMEANSDISTANCEFUNCTORCALCULATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKKMEANSDISTANCEFUNCTORCALCULATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkKMeansDistanceFunctorCalculatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkKMeansDistanceFunctorCalculator> native = vtkSmartPointer<vtkKMeansDistanceFunctorCalculator>::New();
		VtkKMeansDistanceFunctorCalculatorWrap* obj = new VtkKMeansDistanceFunctorCalculatorWrap(native);
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

void VtkKMeansDistanceFunctorCalculatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorCalculatorWrap>(info.Holder());
	vtkKMeansDistanceFunctorCalculator *native = (vtkKMeansDistanceFunctorCalculator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkKMeansDistanceFunctorCalculatorWrap::GetDistanceExpression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorCalculatorWrap>(info.Holder());
	vtkKMeansDistanceFunctorCalculator *native = (vtkKMeansDistanceFunctorCalculator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceExpression();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkKMeansDistanceFunctorCalculatorWrap::GetFunctionParser(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorCalculatorWrap>(info.Holder());
	vtkKMeansDistanceFunctorCalculator *native = (vtkKMeansDistanceFunctorCalculator *)wrapper->native.GetPointer();
	vtkFunctionParser * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFunctionParser();
	VtkFunctionParserWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFunctionParserWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFunctionParserWrap *w = new VtkFunctionParserWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKMeansDistanceFunctorCalculatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorCalculatorWrap>(info.Holder());
	vtkKMeansDistanceFunctorCalculator *native = (vtkKMeansDistanceFunctorCalculator *)wrapper->native.GetPointer();
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

void VtkKMeansDistanceFunctorCalculatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorCalculatorWrap>(info.Holder());
	vtkKMeansDistanceFunctorCalculator *native = (vtkKMeansDistanceFunctorCalculator *)wrapper->native.GetPointer();
	vtkKMeansDistanceFunctorCalculator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkKMeansDistanceFunctorCalculatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkKMeansDistanceFunctorCalculatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKMeansDistanceFunctorCalculatorWrap *w = new VtkKMeansDistanceFunctorCalculatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKMeansDistanceFunctorCalculatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorCalculatorWrap>(info.Holder());
	vtkKMeansDistanceFunctorCalculator *native = (vtkKMeansDistanceFunctorCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkKMeansDistanceFunctorCalculator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkKMeansDistanceFunctorCalculatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkKMeansDistanceFunctorCalculatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkKMeansDistanceFunctorCalculatorWrap *w = new VtkKMeansDistanceFunctorCalculatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKMeansDistanceFunctorCalculatorWrap::SetDistanceExpression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorCalculatorWrap>(info.Holder());
	vtkKMeansDistanceFunctorCalculator *native = (vtkKMeansDistanceFunctorCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistanceExpression(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKMeansDistanceFunctorCalculatorWrap::SetFunctionParser(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKMeansDistanceFunctorCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkKMeansDistanceFunctorCalculatorWrap>(info.Holder());
	vtkKMeansDistanceFunctorCalculator *native = (vtkKMeansDistanceFunctorCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkFunctionParserWrap::ptpl))->HasInstance(info[0]))
	{
		VtkFunctionParserWrap *a0 = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFunctionParser(
			(vtkFunctionParser *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

