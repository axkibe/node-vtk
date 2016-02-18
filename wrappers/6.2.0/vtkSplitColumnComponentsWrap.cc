/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTableAlgorithmWrap.h"
#include "vtkSplitColumnComponentsWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSplitColumnComponentsWrap::ptpl;

VtkSplitColumnComponentsWrap::VtkSplitColumnComponentsWrap()
{ }

VtkSplitColumnComponentsWrap::VtkSplitColumnComponentsWrap(vtkSmartPointer<vtkSplitColumnComponents> _native)
{ native = _native; }

VtkSplitColumnComponentsWrap::~VtkSplitColumnComponentsWrap()
{ }

void VtkSplitColumnComponentsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSplitColumnComponents").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SplitColumnComponents").ToLocalChecked(), ConstructorGetter);
}

void VtkSplitColumnComponentsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSplitColumnComponentsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSplitColumnComponentsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCalculateMagnitudes", GetCalculateMagnitudes);
	Nan::SetPrototypeMethod(tpl, "getCalculateMagnitudes", GetCalculateMagnitudes);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNamingMode", GetNamingMode);
	Nan::SetPrototypeMethod(tpl, "getNamingMode", GetNamingMode);

	Nan::SetPrototypeMethod(tpl, "GetNamingModeMaxValue", GetNamingModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNamingModeMaxValue", GetNamingModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNamingModeMinValue", GetNamingModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getNamingModeMinValue", GetNamingModeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCalculateMagnitudes", SetCalculateMagnitudes);
	Nan::SetPrototypeMethod(tpl, "setCalculateMagnitudes", SetCalculateMagnitudes);

	Nan::SetPrototypeMethod(tpl, "SetNamingMode", SetNamingMode);
	Nan::SetPrototypeMethod(tpl, "setNamingMode", SetNamingMode);

	Nan::SetPrototypeMethod(tpl, "SetNamingModeToNamesWithParens", SetNamingModeToNamesWithParens);
	Nan::SetPrototypeMethod(tpl, "setNamingModeToNamesWithParens", SetNamingModeToNamesWithParens);

	Nan::SetPrototypeMethod(tpl, "SetNamingModeToNamesWithUnderscores", SetNamingModeToNamesWithUnderscores);
	Nan::SetPrototypeMethod(tpl, "setNamingModeToNamesWithUnderscores", SetNamingModeToNamesWithUnderscores);

	Nan::SetPrototypeMethod(tpl, "SetNamingModeToNumberWithParens", SetNamingModeToNumberWithParens);
	Nan::SetPrototypeMethod(tpl, "setNamingModeToNumberWithParens", SetNamingModeToNumberWithParens);

	Nan::SetPrototypeMethod(tpl, "SetNamingModeToNumberWithUnderscores", SetNamingModeToNumberWithUnderscores);
	Nan::SetPrototypeMethod(tpl, "setNamingModeToNumberWithUnderscores", SetNamingModeToNumberWithUnderscores);

#ifdef VTK_NODE_PLUS_VTKSPLITCOLUMNCOMPONENTSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSPLITCOLUMNCOMPONENTSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSplitColumnComponentsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSplitColumnComponents> native = vtkSmartPointer<vtkSplitColumnComponents>::New();
		VtkSplitColumnComponentsWrap* obj = new VtkSplitColumnComponentsWrap(native);
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

void VtkSplitColumnComponentsWrap::GetCalculateMagnitudes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCalculateMagnitudes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplitColumnComponentsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplitColumnComponentsWrap::GetNamingMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNamingMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplitColumnComponentsWrap::GetNamingModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNamingModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplitColumnComponentsWrap::GetNamingModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNamingModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplitColumnComponentsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
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

void VtkSplitColumnComponentsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	vtkSplitColumnComponents * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSplitColumnComponentsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplitColumnComponentsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplitColumnComponentsWrap *w = new VtkSplitColumnComponentsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplitColumnComponentsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSplitColumnComponents * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSplitColumnComponentsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSplitColumnComponentsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSplitColumnComponentsWrap *w = new VtkSplitColumnComponentsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplitColumnComponentsWrap::SetCalculateMagnitudes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCalculateMagnitudes(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplitColumnComponentsWrap::SetNamingMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNamingMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplitColumnComponentsWrap::SetNamingModeToNamesWithParens(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetNamingModeToNamesWithParens();
}

void VtkSplitColumnComponentsWrap::SetNamingModeToNamesWithUnderscores(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetNamingModeToNamesWithUnderscores();
}

void VtkSplitColumnComponentsWrap::SetNamingModeToNumberWithParens(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetNamingModeToNumberWithParens();
}

void VtkSplitColumnComponentsWrap::SetNamingModeToNumberWithUnderscores(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitColumnComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkSplitColumnComponentsWrap>(info.Holder());
	vtkSplitColumnComponents *native = (vtkSplitColumnComponents *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetNamingModeToNumberWithUnderscores();
}

