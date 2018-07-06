/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMoleculeAlgorithmWrap.h"
#include "vtkGaussianCubeReader2Wrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkMoleculeWrap.h"
#include "vtkImageDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGaussianCubeReader2Wrap::ptpl;

VtkGaussianCubeReader2Wrap::VtkGaussianCubeReader2Wrap()
{ }

VtkGaussianCubeReader2Wrap::VtkGaussianCubeReader2Wrap(vtkSmartPointer<vtkGaussianCubeReader2> _native)
{ native = _native; }

VtkGaussianCubeReader2Wrap::~VtkGaussianCubeReader2Wrap()
{ }

void VtkGaussianCubeReader2Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGaussianCubeReader2").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GaussianCubeReader2").ToLocalChecked(), ConstructorGetter);
}

void VtkGaussianCubeReader2Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGaussianCubeReader2Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMoleculeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMoleculeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGaussianCubeReader2Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetGridOutput", GetGridOutput);
	Nan::SetPrototypeMethod(tpl, "getGridOutput", GetGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetOutput", SetOutput);
	Nan::SetPrototypeMethod(tpl, "setOutput", SetOutput);

#ifdef VTK_NODE_PLUS_VTKGAUSSIANCUBEREADER2WRAP_INITPTPL
	VTK_NODE_PLUS_VTKGAUSSIANCUBEREADER2WRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGaussianCubeReader2Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGaussianCubeReader2> native = vtkSmartPointer<vtkGaussianCubeReader2>::New();
		VtkGaussianCubeReader2Wrap* obj = new VtkGaussianCubeReader2Wrap(native);
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

void VtkGaussianCubeReader2Wrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReader2Wrap>(info.Holder());
	vtkGaussianCubeReader2 *native = (vtkGaussianCubeReader2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGaussianCubeReader2Wrap::GetGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReader2Wrap>(info.Holder());
	vtkGaussianCubeReader2 *native = (vtkGaussianCubeReader2 *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridOutput();
	VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianCubeReader2Wrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReader2Wrap>(info.Holder());
	vtkGaussianCubeReader2 *native = (vtkGaussianCubeReader2 *)wrapper->native.GetPointer();
	vtkMolecule * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkMoleculeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMoleculeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMoleculeWrap *w = new VtkMoleculeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianCubeReader2Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReader2Wrap>(info.Holder());
	vtkGaussianCubeReader2 *native = (vtkGaussianCubeReader2 *)wrapper->native.GetPointer();
	vtkGaussianCubeReader2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGaussianCubeReader2Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGaussianCubeReader2Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGaussianCubeReader2Wrap *w = new VtkGaussianCubeReader2Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianCubeReader2Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReader2Wrap>(info.Holder());
	vtkGaussianCubeReader2 *native = (vtkGaussianCubeReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGaussianCubeReader2 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGaussianCubeReader2Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGaussianCubeReader2Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGaussianCubeReader2Wrap *w = new VtkGaussianCubeReader2Wrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianCubeReader2Wrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReader2Wrap>(info.Holder());
	vtkGaussianCubeReader2 *native = (vtkGaussianCubeReader2 *)wrapper->native.GetPointer();
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

void VtkGaussianCubeReader2Wrap::SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReader2Wrap>(info.Holder());
	vtkGaussianCubeReader2 *native = (vtkGaussianCubeReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMoleculeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMoleculeWrap *a0 = ObjectWrap::Unwrap<VtkMoleculeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutput(
			(vtkMolecule *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
