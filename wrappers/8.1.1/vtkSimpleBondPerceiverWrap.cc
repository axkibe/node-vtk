/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMoleculeAlgorithmWrap.h"
#include "vtkSimpleBondPerceiverWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSimpleBondPerceiverWrap::ptpl;

VtkSimpleBondPerceiverWrap::VtkSimpleBondPerceiverWrap()
{ }

VtkSimpleBondPerceiverWrap::VtkSimpleBondPerceiverWrap(vtkSmartPointer<vtkSimpleBondPerceiver> _native)
{ native = _native; }

VtkSimpleBondPerceiverWrap::~VtkSimpleBondPerceiverWrap()
{ }

void VtkSimpleBondPerceiverWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSimpleBondPerceiver").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SimpleBondPerceiver").ToLocalChecked(), ConstructorGetter);
}

void VtkSimpleBondPerceiverWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSimpleBondPerceiverWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMoleculeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMoleculeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSimpleBondPerceiverWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

#ifdef VTK_NODE_PLUS_VTKSIMPLEBONDPERCEIVERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSIMPLEBONDPERCEIVERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSimpleBondPerceiverWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSimpleBondPerceiver> native = vtkSmartPointer<vtkSimpleBondPerceiver>::New();
		VtkSimpleBondPerceiverWrap* obj = new VtkSimpleBondPerceiverWrap(native);
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

void VtkSimpleBondPerceiverWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleBondPerceiverWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleBondPerceiverWrap>(info.Holder());
	vtkSimpleBondPerceiver *native = (vtkSimpleBondPerceiver *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimpleBondPerceiverWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleBondPerceiverWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleBondPerceiverWrap>(info.Holder());
	vtkSimpleBondPerceiver *native = (vtkSimpleBondPerceiver *)wrapper->native.GetPointer();
	vtkSimpleBondPerceiver * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSimpleBondPerceiverWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSimpleBondPerceiverWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSimpleBondPerceiverWrap *w = new VtkSimpleBondPerceiverWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSimpleBondPerceiverWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleBondPerceiverWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleBondPerceiverWrap>(info.Holder());
	vtkSimpleBondPerceiver *native = (vtkSimpleBondPerceiver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSimpleBondPerceiver * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSimpleBondPerceiverWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSimpleBondPerceiverWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSimpleBondPerceiverWrap *w = new VtkSimpleBondPerceiverWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimpleBondPerceiverWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleBondPerceiverWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleBondPerceiverWrap>(info.Holder());
	vtkSimpleBondPerceiver *native = (vtkSimpleBondPerceiver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

