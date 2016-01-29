/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkProteinRibbonFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProteinRibbonFilterWrap::ptpl;

VtkProteinRibbonFilterWrap::VtkProteinRibbonFilterWrap()
{ }

VtkProteinRibbonFilterWrap::VtkProteinRibbonFilterWrap(vtkSmartPointer<vtkProteinRibbonFilter> _native)
{ native = _native; }

VtkProteinRibbonFilterWrap::~VtkProteinRibbonFilterWrap()
{ }

void VtkProteinRibbonFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProteinRibbonFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProteinRibbonFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkProteinRibbonFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProteinRibbonFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProteinRibbonFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDrawSmallMoleculesAsSpheres", GetDrawSmallMoleculesAsSpheres);
	Nan::SetPrototypeMethod(tpl, "getDrawSmallMoleculesAsSpheres", GetDrawSmallMoleculesAsSpheres);

	Nan::SetPrototypeMethod(tpl, "GetSphereResolution", GetSphereResolution);
	Nan::SetPrototypeMethod(tpl, "getSphereResolution", GetSphereResolution);

	Nan::SetPrototypeMethod(tpl, "GetSubdivideFactor", GetSubdivideFactor);
	Nan::SetPrototypeMethod(tpl, "getSubdivideFactor", GetSubdivideFactor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDrawSmallMoleculesAsSpheres", SetDrawSmallMoleculesAsSpheres);
	Nan::SetPrototypeMethod(tpl, "setDrawSmallMoleculesAsSpheres", SetDrawSmallMoleculesAsSpheres);

	Nan::SetPrototypeMethod(tpl, "SetSphereResolution", SetSphereResolution);
	Nan::SetPrototypeMethod(tpl, "setSphereResolution", SetSphereResolution);

	Nan::SetPrototypeMethod(tpl, "SetSubdivideFactor", SetSubdivideFactor);
	Nan::SetPrototypeMethod(tpl, "setSubdivideFactor", SetSubdivideFactor);

	ptpl.Reset( tpl );
}

void VtkProteinRibbonFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProteinRibbonFilter> native = vtkSmartPointer<vtkProteinRibbonFilter>::New();
		VtkProteinRibbonFilterWrap* obj = new VtkProteinRibbonFilterWrap(native);
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

void VtkProteinRibbonFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProteinRibbonFilterWrap::GetDrawSmallMoleculesAsSpheres(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDrawSmallMoleculesAsSpheres();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProteinRibbonFilterWrap::GetSphereResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSphereResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProteinRibbonFilterWrap::GetSubdivideFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubdivideFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProteinRibbonFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
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

void VtkProteinRibbonFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	vtkProteinRibbonFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProteinRibbonFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProteinRibbonFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProteinRibbonFilterWrap *w = new VtkProteinRibbonFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProteinRibbonFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProteinRibbonFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProteinRibbonFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProteinRibbonFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProteinRibbonFilterWrap *w = new VtkProteinRibbonFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProteinRibbonFilterWrap::SetDrawSmallMoleculesAsSpheres(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDrawSmallMoleculesAsSpheres(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProteinRibbonFilterWrap::SetSphereResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSphereResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProteinRibbonFilterWrap::SetSubdivideFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubdivideFactor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

