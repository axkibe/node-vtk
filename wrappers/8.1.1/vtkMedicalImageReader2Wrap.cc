/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageReader2Wrap.h"
#include "vtkMedicalImageReader2Wrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkMedicalImagePropertiesWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMedicalImageReader2Wrap::ptpl;

VtkMedicalImageReader2Wrap::VtkMedicalImageReader2Wrap()
{ }

VtkMedicalImageReader2Wrap::VtkMedicalImageReader2Wrap(vtkSmartPointer<vtkMedicalImageReader2> _native)
{ native = _native; }

VtkMedicalImageReader2Wrap::~VtkMedicalImageReader2Wrap()
{ }

void VtkMedicalImageReader2Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMedicalImageReader2").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MedicalImageReader2").ToLocalChecked(), ConstructorGetter);
}

void VtkMedicalImageReader2Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMedicalImageReader2Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageReader2Wrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageReader2Wrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMedicalImageReader2Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDate", GetDate);
	Nan::SetPrototypeMethod(tpl, "getDate", GetDate);

	Nan::SetPrototypeMethod(tpl, "GetImageNumber", GetImageNumber);
	Nan::SetPrototypeMethod(tpl, "getImageNumber", GetImageNumber);

	Nan::SetPrototypeMethod(tpl, "GetMedicalImageProperties", GetMedicalImageProperties);
	Nan::SetPrototypeMethod(tpl, "getMedicalImageProperties", GetMedicalImageProperties);

	Nan::SetPrototypeMethod(tpl, "GetModality", GetModality);
	Nan::SetPrototypeMethod(tpl, "getModality", GetModality);

	Nan::SetPrototypeMethod(tpl, "GetPatientID", GetPatientID);
	Nan::SetPrototypeMethod(tpl, "getPatientID", GetPatientID);

	Nan::SetPrototypeMethod(tpl, "GetPatientName", GetPatientName);
	Nan::SetPrototypeMethod(tpl, "getPatientName", GetPatientName);

	Nan::SetPrototypeMethod(tpl, "GetSeries", GetSeries);
	Nan::SetPrototypeMethod(tpl, "getSeries", GetSeries);

	Nan::SetPrototypeMethod(tpl, "GetStudy", GetStudy);
	Nan::SetPrototypeMethod(tpl, "getStudy", GetStudy);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDate", SetDate);
	Nan::SetPrototypeMethod(tpl, "setDate", SetDate);

	Nan::SetPrototypeMethod(tpl, "SetImageNumber", SetImageNumber);
	Nan::SetPrototypeMethod(tpl, "setImageNumber", SetImageNumber);

	Nan::SetPrototypeMethod(tpl, "SetModality", SetModality);
	Nan::SetPrototypeMethod(tpl, "setModality", SetModality);

	Nan::SetPrototypeMethod(tpl, "SetPatientID", SetPatientID);
	Nan::SetPrototypeMethod(tpl, "setPatientID", SetPatientID);

	Nan::SetPrototypeMethod(tpl, "SetPatientName", SetPatientName);
	Nan::SetPrototypeMethod(tpl, "setPatientName", SetPatientName);

	Nan::SetPrototypeMethod(tpl, "SetSeries", SetSeries);
	Nan::SetPrototypeMethod(tpl, "setSeries", SetSeries);

	Nan::SetPrototypeMethod(tpl, "SetStudy", SetStudy);
	Nan::SetPrototypeMethod(tpl, "setStudy", SetStudy);

#ifdef VTK_NODE_PLUS_VTKMEDICALIMAGEREADER2WRAP_INITPTPL
	VTK_NODE_PLUS_VTKMEDICALIMAGEREADER2WRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMedicalImageReader2Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMedicalImageReader2> native = vtkSmartPointer<vtkMedicalImageReader2>::New();
		VtkMedicalImageReader2Wrap* obj = new VtkMedicalImageReader2Wrap(native);
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

void VtkMedicalImageReader2Wrap::GetDate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDate();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMedicalImageReader2Wrap::GetImageNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageNumber();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMedicalImageReader2Wrap::GetMedicalImageProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	vtkMedicalImageProperties * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMedicalImageProperties();
	VtkMedicalImagePropertiesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMedicalImagePropertiesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMedicalImagePropertiesWrap *w = new VtkMedicalImagePropertiesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMedicalImageReader2Wrap::GetModality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetModality();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMedicalImageReader2Wrap::GetPatientID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPatientID();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMedicalImageReader2Wrap::GetPatientName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPatientName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMedicalImageReader2Wrap::GetSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeries();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMedicalImageReader2Wrap::GetStudy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStudy();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMedicalImageReader2Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	vtkMedicalImageReader2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMedicalImageReader2Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMedicalImageReader2Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMedicalImageReader2Wrap *w = new VtkMedicalImageReader2Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMedicalImageReader2Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMedicalImageReader2 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMedicalImageReader2Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMedicalImageReader2Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMedicalImageReader2Wrap *w = new VtkMedicalImageReader2Wrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMedicalImageReader2Wrap::SetDate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDate(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMedicalImageReader2Wrap::SetImageNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageNumber(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMedicalImageReader2Wrap::SetModality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetModality(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMedicalImageReader2Wrap::SetPatientID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPatientID(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMedicalImageReader2Wrap::SetPatientName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPatientName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMedicalImageReader2Wrap::SetSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSeries(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMedicalImageReader2Wrap::SetStudy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMedicalImageReader2Wrap *wrapper = ObjectWrap::Unwrap<VtkMedicalImageReader2Wrap>(info.Holder());
	vtkMedicalImageReader2 *native = (vtkMedicalImageReader2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStudy(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
