/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkEdgeTableWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEdgeTableWrap::ptpl;

VtkEdgeTableWrap::VtkEdgeTableWrap()
{ }

VtkEdgeTableWrap::VtkEdgeTableWrap(vtkSmartPointer<vtkEdgeTable> _native)
{ native = _native; }

VtkEdgeTableWrap::~VtkEdgeTableWrap()
{ }

void VtkEdgeTableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEdgeTable").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EdgeTable").ToLocalChecked(), ConstructorGetter);
}

void VtkEdgeTableWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEdgeTableWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEdgeTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKEDGETABLEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEDGETABLEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEdgeTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEdgeTable> native = vtkSmartPointer<vtkEdgeTable>::New();
		VtkEdgeTableWrap* obj = new VtkEdgeTableWrap(native);
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

void VtkEdgeTableWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeTableWrap>(info.Holder());
	vtkEdgeTable *native = (vtkEdgeTable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEdgeTableWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeTableWrap>(info.Holder());
	vtkEdgeTable *native = (vtkEdgeTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkEdgeTableWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeTableWrap>(info.Holder());
	vtkEdgeTable *native = (vtkEdgeTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkEdgeTableWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeTableWrap>(info.Holder());
	vtkEdgeTable *native = (vtkEdgeTable *)wrapper->native.GetPointer();
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

void VtkEdgeTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeTableWrap>(info.Holder());
	vtkEdgeTable *native = (vtkEdgeTable *)wrapper->native.GetPointer();
	vtkEdgeTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEdgeTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEdgeTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEdgeTableWrap *w = new VtkEdgeTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEdgeTableWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeTableWrap>(info.Holder());
	vtkEdgeTable *native = (vtkEdgeTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkEdgeTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeTableWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeTableWrap>(info.Holder());
	vtkEdgeTable *native = (vtkEdgeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEdgeTable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkEdgeTableWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEdgeTableWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEdgeTableWrap *w = new VtkEdgeTableWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

