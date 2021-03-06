/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImporterWrap.h"
#include "vtk3DSImporterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> Vtk3DSImporterWrap::ptpl;

Vtk3DSImporterWrap::Vtk3DSImporterWrap()
{ }

Vtk3DSImporterWrap::Vtk3DSImporterWrap(vtkSmartPointer<vtk3DSImporter> _native)
{ native = _native; }

Vtk3DSImporterWrap::~Vtk3DSImporterWrap()
{ }

void Vtk3DSImporterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtk3DSImporter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("3DSImporter").ToLocalChecked(), ConstructorGetter);
}

void Vtk3DSImporterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void Vtk3DSImporterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImporterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImporterWrap::ptpl));
	tpl->SetClassName(Nan::New("Vtk3DSImporterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOff", ComputeNormalsOff);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOff", ComputeNormalsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOn", ComputeNormalsOn);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOn", ComputeNormalsOn);

	Nan::SetPrototypeMethod(tpl, "GetComputeNormals", GetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "getComputeNormals", GetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComputeNormals", SetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "setComputeNormals", SetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

#ifdef VTK_NODE_PLUS_VTK3DSIMPORTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTK3DSIMPORTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void Vtk3DSImporterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtk3DSImporter> native = vtkSmartPointer<vtk3DSImporter>::New();
		Vtk3DSImporterWrap* obj = new Vtk3DSImporterWrap(native);
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

void Vtk3DSImporterWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	Vtk3DSImporterWrap *wrapper = ObjectWrap::Unwrap<Vtk3DSImporterWrap>(info.Holder());
	vtk3DSImporter *native = (vtk3DSImporter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void Vtk3DSImporterWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	Vtk3DSImporterWrap *wrapper = ObjectWrap::Unwrap<Vtk3DSImporterWrap>(info.Holder());
	vtk3DSImporter *native = (vtk3DSImporter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void Vtk3DSImporterWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	Vtk3DSImporterWrap *wrapper = ObjectWrap::Unwrap<Vtk3DSImporterWrap>(info.Holder());
	vtk3DSImporter *native = (vtk3DSImporter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void Vtk3DSImporterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	Vtk3DSImporterWrap *wrapper = ObjectWrap::Unwrap<Vtk3DSImporterWrap>(info.Holder());
	vtk3DSImporter *native = (vtk3DSImporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void Vtk3DSImporterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	Vtk3DSImporterWrap *wrapper = ObjectWrap::Unwrap<Vtk3DSImporterWrap>(info.Holder());
	vtk3DSImporter *native = (vtk3DSImporter *)wrapper->native.GetPointer();
	vtk3DSImporter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	Vtk3DSImporterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(Vtk3DSImporterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	Vtk3DSImporterWrap *w = new Vtk3DSImporterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void Vtk3DSImporterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	Vtk3DSImporterWrap *wrapper = ObjectWrap::Unwrap<Vtk3DSImporterWrap>(info.Holder());
	vtk3DSImporter *native = (vtk3DSImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtk3DSImporter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		Vtk3DSImporterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(Vtk3DSImporterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		Vtk3DSImporterWrap *w = new Vtk3DSImporterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void Vtk3DSImporterWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	Vtk3DSImporterWrap *wrapper = ObjectWrap::Unwrap<Vtk3DSImporterWrap>(info.Holder());
	vtk3DSImporter *native = (vtk3DSImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void Vtk3DSImporterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	Vtk3DSImporterWrap *wrapper = ObjectWrap::Unwrap<Vtk3DSImporterWrap>(info.Holder());
	vtk3DSImporter *native = (vtk3DSImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

