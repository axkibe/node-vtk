/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleUnicamWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleUnicamWrap::ptpl;

VtkInteractorStyleUnicamWrap::VtkInteractorStyleUnicamWrap()
{ }

VtkInteractorStyleUnicamWrap::VtkInteractorStyleUnicamWrap(vtkSmartPointer<vtkInteractorStyleUnicam> _native)
{ native = _native; }

VtkInteractorStyleUnicamWrap::~VtkInteractorStyleUnicamWrap()
{ }

void VtkInteractorStyleUnicamWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleUnicam").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleUnicam").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleUnicamWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleUnicamWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleUnicamWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetWorldUpVector", GetWorldUpVector);
	Nan::SetPrototypeMethod(tpl, "getWorldUpVector", GetWorldUpVector);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonDown", OnLeftButtonDown);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonDown", OnLeftButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonMove", OnLeftButtonMove);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonMove", OnLeftButtonMove);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "OnTimer", OnTimer);
	Nan::SetPrototypeMethod(tpl, "onTimer", OnTimer);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetWorldUpVector", SetWorldUpVector);
	Nan::SetPrototypeMethod(tpl, "setWorldUpVector", SetWorldUpVector);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLEUNICAMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERACTORSTYLEUNICAMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInteractorStyleUnicamWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleUnicam> native = vtkSmartPointer<vtkInteractorStyleUnicam>::New();
		VtkInteractorStyleUnicamWrap* obj = new VtkInteractorStyleUnicamWrap(native);
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

void VtkInteractorStyleUnicamWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleUnicamWrap::GetWorldUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWorldUpVector();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkInteractorStyleUnicamWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
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

void VtkInteractorStyleUnicamWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
	vtkInteractorStyleUnicam * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyleUnicamWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleUnicamWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleUnicamWrap *w = new VtkInteractorStyleUnicamWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleUnicamWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleUnicamWrap::OnLeftButtonMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonMove();
}

void VtkInteractorStyleUnicamWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleUnicamWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleUnicamWrap::OnTimer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnTimer();
}

void VtkInteractorStyleUnicamWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleUnicam * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkInteractorStyleUnicamWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleUnicamWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleUnicamWrap *w = new VtkInteractorStyleUnicamWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleUnicamWrap::SetWorldUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUnicamWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUnicamWrap>(info.Holder());
	vtkInteractorStyleUnicam *native = (vtkInteractorStyleUnicam *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWorldUpVector(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWorldUpVector(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetWorldUpVector(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

