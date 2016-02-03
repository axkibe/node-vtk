/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractCellLinksWrap.h"
#include "vtkStaticCellLinksWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStaticCellLinksWrap::ptpl;

VtkStaticCellLinksWrap::VtkStaticCellLinksWrap()
{ }

VtkStaticCellLinksWrap::VtkStaticCellLinksWrap(vtkSmartPointer<vtkStaticCellLinks> _native)
{ native = _native; }

VtkStaticCellLinksWrap::~VtkStaticCellLinksWrap()
{ }

void VtkStaticCellLinksWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStaticCellLinks").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StaticCellLinks").ToLocalChecked(), ConstructorGetter);
}

void VtkStaticCellLinksWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStaticCellLinksWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractCellLinksWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractCellLinksWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStaticCellLinksWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLinks", BuildLinks);
	Nan::SetPrototypeMethod(tpl, "buildLinks", BuildLinks);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkStaticCellLinksWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStaticCellLinks> native = vtkSmartPointer<vtkStaticCellLinks>::New();
		VtkStaticCellLinksWrap* obj = new VtkStaticCellLinksWrap(native);
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

void VtkStaticCellLinksWrap::BuildLinks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLinksWrap>(info.Holder());
	vtkStaticCellLinks *native = (vtkStaticCellLinks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->BuildLinks(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStaticCellLinksWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLinksWrap>(info.Holder());
	vtkStaticCellLinks *native = (vtkStaticCellLinks *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStaticCellLinksWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLinksWrap>(info.Holder());
	vtkStaticCellLinks *native = (vtkStaticCellLinks *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkStaticCellLinksWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLinksWrap>(info.Holder());
	vtkStaticCellLinks *native = (vtkStaticCellLinks *)wrapper->native.GetPointer();
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

void VtkStaticCellLinksWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLinksWrap>(info.Holder());
	vtkStaticCellLinks *native = (vtkStaticCellLinks *)wrapper->native.GetPointer();
	vtkStaticCellLinks * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStaticCellLinksWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStaticCellLinksWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStaticCellLinksWrap *w = new VtkStaticCellLinksWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStaticCellLinksWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStaticCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkStaticCellLinksWrap>(info.Holder());
	vtkStaticCellLinks *native = (vtkStaticCellLinks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStaticCellLinks * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStaticCellLinksWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStaticCellLinksWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStaticCellLinksWrap *w = new VtkStaticCellLinksWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

