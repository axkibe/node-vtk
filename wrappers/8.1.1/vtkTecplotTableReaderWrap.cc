/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTableAlgorithmWrap.h"
#include "vtkTecplotTableReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTecplotTableReaderWrap::ptpl;

VtkTecplotTableReaderWrap::VtkTecplotTableReaderWrap()
{ }

VtkTecplotTableReaderWrap::VtkTecplotTableReaderWrap(vtkSmartPointer<vtkTecplotTableReader> _native)
{ native = _native; }

VtkTecplotTableReaderWrap::~VtkTecplotTableReaderWrap()
{ }

void VtkTecplotTableReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTecplotTableReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TecplotTableReader").ToLocalChecked(), ConstructorGetter);
}

void VtkTecplotTableReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTecplotTableReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTecplotTableReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GeneratePedigreeIdsOff", GeneratePedigreeIdsOff);
	Nan::SetPrototypeMethod(tpl, "generatePedigreeIdsOff", GeneratePedigreeIdsOff);

	Nan::SetPrototypeMethod(tpl, "GeneratePedigreeIdsOn", GeneratePedigreeIdsOn);
	Nan::SetPrototypeMethod(tpl, "generatePedigreeIdsOn", GeneratePedigreeIdsOn);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetGeneratePedigreeIds", GetGeneratePedigreeIds);
	Nan::SetPrototypeMethod(tpl, "getGeneratePedigreeIds", GetGeneratePedigreeIds);

	Nan::SetPrototypeMethod(tpl, "GetOutputPedigreeIds", GetOutputPedigreeIds);
	Nan::SetPrototypeMethod(tpl, "getOutputPedigreeIds", GetOutputPedigreeIds);

	Nan::SetPrototypeMethod(tpl, "GetPedigreeIdArrayName", GetPedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "getPedigreeIdArrayName", GetPedigreeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutputPedigreeIdsOff", OutputPedigreeIdsOff);
	Nan::SetPrototypeMethod(tpl, "outputPedigreeIdsOff", OutputPedigreeIdsOff);

	Nan::SetPrototypeMethod(tpl, "OutputPedigreeIdsOn", OutputPedigreeIdsOn);
	Nan::SetPrototypeMethod(tpl, "outputPedigreeIdsOn", OutputPedigreeIdsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetGeneratePedigreeIds", SetGeneratePedigreeIds);
	Nan::SetPrototypeMethod(tpl, "setGeneratePedigreeIds", SetGeneratePedigreeIds);

	Nan::SetPrototypeMethod(tpl, "SetOutputPedigreeIds", SetOutputPedigreeIds);
	Nan::SetPrototypeMethod(tpl, "setOutputPedigreeIds", SetOutputPedigreeIds);

	Nan::SetPrototypeMethod(tpl, "SetPedigreeIdArrayName", SetPedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "setPedigreeIdArrayName", SetPedigreeIdArrayName);

#ifdef VTK_NODE_PLUS_VTKTECPLOTTABLEREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTECPLOTTABLEREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTecplotTableReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTecplotTableReader> native = vtkSmartPointer<vtkTecplotTableReader>::New();
		VtkTecplotTableReaderWrap* obj = new VtkTecplotTableReaderWrap(native);
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

void VtkTecplotTableReaderWrap::GeneratePedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePedigreeIdsOff();
}

void VtkTecplotTableReaderWrap::GeneratePedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePedigreeIdsOn();
}

void VtkTecplotTableReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTecplotTableReaderWrap::GetGeneratePedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeneratePedigreeIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTecplotTableReaderWrap::GetOutputPedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPedigreeIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTecplotTableReaderWrap::GetPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPedigreeIdArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTecplotTableReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	vtkTecplotTableReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTecplotTableReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTecplotTableReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTecplotTableReaderWrap *w = new VtkTecplotTableReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTecplotTableReaderWrap::OutputPedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutputPedigreeIdsOff();
}

void VtkTecplotTableReaderWrap::OutputPedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutputPedigreeIdsOn();
}

void VtkTecplotTableReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTecplotTableReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTecplotTableReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTecplotTableReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTecplotTableReaderWrap *w = new VtkTecplotTableReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTecplotTableReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
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

void VtkTecplotTableReaderWrap::SetGeneratePedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeneratePedigreeIds(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTecplotTableReaderWrap::SetOutputPedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPedigreeIds(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTecplotTableReaderWrap::SetPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTecplotTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTecplotTableReaderWrap>(info.Holder());
	vtkTecplotTableReader *native = (vtkTecplotTableReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPedigreeIdArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

