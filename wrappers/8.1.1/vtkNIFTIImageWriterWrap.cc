/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageWriterWrap.h"
#include "vtkNIFTIImageWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkNIFTIImageHeaderWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNIFTIImageWriterWrap::ptpl;

VtkNIFTIImageWriterWrap::VtkNIFTIImageWriterWrap()
{ }

VtkNIFTIImageWriterWrap::VtkNIFTIImageWriterWrap(vtkSmartPointer<vtkNIFTIImageWriter> _native)
{ native = _native; }

VtkNIFTIImageWriterWrap::~VtkNIFTIImageWriterWrap()
{ }

void VtkNIFTIImageWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNIFTIImageWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NIFTIImageWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkNIFTIImageWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNIFTIImageWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNIFTIImageWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDescription", GetDescription);
	Nan::SetPrototypeMethod(tpl, "getDescription", GetDescription);

	Nan::SetPrototypeMethod(tpl, "GetNIFTIHeader", GetNIFTIHeader);
	Nan::SetPrototypeMethod(tpl, "getNIFTIHeader", GetNIFTIHeader);

	Nan::SetPrototypeMethod(tpl, "GetNIFTIVersion", GetNIFTIVersion);
	Nan::SetPrototypeMethod(tpl, "getNIFTIVersion", GetNIFTIVersion);

	Nan::SetPrototypeMethod(tpl, "GetPlanarRGB", GetPlanarRGB);
	Nan::SetPrototypeMethod(tpl, "getPlanarRGB", GetPlanarRGB);

	Nan::SetPrototypeMethod(tpl, "GetQFac", GetQFac);
	Nan::SetPrototypeMethod(tpl, "getQFac", GetQFac);

	Nan::SetPrototypeMethod(tpl, "GetQFormMatrix", GetQFormMatrix);
	Nan::SetPrototypeMethod(tpl, "getQFormMatrix", GetQFormMatrix);

	Nan::SetPrototypeMethod(tpl, "GetRescaleIntercept", GetRescaleIntercept);
	Nan::SetPrototypeMethod(tpl, "getRescaleIntercept", GetRescaleIntercept);

	Nan::SetPrototypeMethod(tpl, "GetRescaleSlope", GetRescaleSlope);
	Nan::SetPrototypeMethod(tpl, "getRescaleSlope", GetRescaleSlope);

	Nan::SetPrototypeMethod(tpl, "GetSFormMatrix", GetSFormMatrix);
	Nan::SetPrototypeMethod(tpl, "getSFormMatrix", GetSFormMatrix);

	Nan::SetPrototypeMethod(tpl, "GetTimeDimension", GetTimeDimension);
	Nan::SetPrototypeMethod(tpl, "getTimeDimension", GetTimeDimension);

	Nan::SetPrototypeMethod(tpl, "GetTimeSpacing", GetTimeSpacing);
	Nan::SetPrototypeMethod(tpl, "getTimeSpacing", GetTimeSpacing);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PlanarRGBOff", PlanarRGBOff);
	Nan::SetPrototypeMethod(tpl, "planarRGBOff", PlanarRGBOff);

	Nan::SetPrototypeMethod(tpl, "PlanarRGBOn", PlanarRGBOn);
	Nan::SetPrototypeMethod(tpl, "planarRGBOn", PlanarRGBOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDescription", SetDescription);
	Nan::SetPrototypeMethod(tpl, "setDescription", SetDescription);

	Nan::SetPrototypeMethod(tpl, "SetNIFTIHeader", SetNIFTIHeader);
	Nan::SetPrototypeMethod(tpl, "setNIFTIHeader", SetNIFTIHeader);

	Nan::SetPrototypeMethod(tpl, "SetNIFTIVersion", SetNIFTIVersion);
	Nan::SetPrototypeMethod(tpl, "setNIFTIVersion", SetNIFTIVersion);

	Nan::SetPrototypeMethod(tpl, "SetPlanarRGB", SetPlanarRGB);
	Nan::SetPrototypeMethod(tpl, "setPlanarRGB", SetPlanarRGB);

	Nan::SetPrototypeMethod(tpl, "SetQFac", SetQFac);
	Nan::SetPrototypeMethod(tpl, "setQFac", SetQFac);

	Nan::SetPrototypeMethod(tpl, "SetQFormMatrix", SetQFormMatrix);
	Nan::SetPrototypeMethod(tpl, "setQFormMatrix", SetQFormMatrix);

	Nan::SetPrototypeMethod(tpl, "SetRescaleIntercept", SetRescaleIntercept);
	Nan::SetPrototypeMethod(tpl, "setRescaleIntercept", SetRescaleIntercept);

	Nan::SetPrototypeMethod(tpl, "SetRescaleSlope", SetRescaleSlope);
	Nan::SetPrototypeMethod(tpl, "setRescaleSlope", SetRescaleSlope);

	Nan::SetPrototypeMethod(tpl, "SetSFormMatrix", SetSFormMatrix);
	Nan::SetPrototypeMethod(tpl, "setSFormMatrix", SetSFormMatrix);

	Nan::SetPrototypeMethod(tpl, "SetTimeDimension", SetTimeDimension);
	Nan::SetPrototypeMethod(tpl, "setTimeDimension", SetTimeDimension);

	Nan::SetPrototypeMethod(tpl, "SetTimeSpacing", SetTimeSpacing);
	Nan::SetPrototypeMethod(tpl, "setTimeSpacing", SetTimeSpacing);

#ifdef VTK_NODE_PLUS_VTKNIFTIIMAGEWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKNIFTIIMAGEWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkNIFTIImageWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNIFTIImageWriter> native = vtkSmartPointer<vtkNIFTIImageWriter>::New();
		VtkNIFTIImageWriterWrap* obj = new VtkNIFTIImageWriterWrap(native);
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

void VtkNIFTIImageWriterWrap::GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescription();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNIFTIImageWriterWrap::GetNIFTIHeader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	vtkNIFTIImageHeader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNIFTIHeader();
	VtkNIFTIImageHeaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNIFTIImageHeaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNIFTIImageHeaderWrap *w = new VtkNIFTIImageHeaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNIFTIImageWriterWrap::GetNIFTIVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNIFTIVersion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNIFTIImageWriterWrap::GetPlanarRGB(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlanarRGB();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNIFTIImageWriterWrap::GetQFac(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQFac();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNIFTIImageWriterWrap::GetQFormMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQFormMatrix();
	VtkMatrix4x4Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrix4x4Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNIFTIImageWriterWrap::GetRescaleIntercept(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRescaleIntercept();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNIFTIImageWriterWrap::GetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRescaleSlope();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNIFTIImageWriterWrap::GetSFormMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSFormMatrix();
	VtkMatrix4x4Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrix4x4Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNIFTIImageWriterWrap::GetTimeDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNIFTIImageWriterWrap::GetTimeSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeSpacing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNIFTIImageWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	vtkNIFTIImageWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkNIFTIImageWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNIFTIImageWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNIFTIImageWriterWrap *w = new VtkNIFTIImageWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNIFTIImageWriterWrap::PlanarRGBOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PlanarRGBOff();
}

void VtkNIFTIImageWriterWrap::PlanarRGBOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PlanarRGBOn();
}

void VtkNIFTIImageWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkNIFTIImageWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkNIFTIImageWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNIFTIImageWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNIFTIImageWriterWrap *w = new VtkNIFTIImageWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDescription(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetNIFTIHeader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkNIFTIImageHeaderWrap::ptpl))->HasInstance(info[0]))
	{
		VtkNIFTIImageHeaderWrap *a0 = ObjectWrap::Unwrap<VtkNIFTIImageHeaderWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNIFTIHeader(
			(vtkNIFTIImageHeader *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetNIFTIVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNIFTIVersion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetPlanarRGB(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlanarRGB(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetQFac(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQFac(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetQFormMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQFormMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetRescaleIntercept(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRescaleIntercept(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRescaleSlope(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetSFormMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSFormMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetTimeDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNIFTIImageWriterWrap::SetTimeSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNIFTIImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkNIFTIImageWriterWrap>(info.Holder());
	vtkNIFTIImageWriter *native = (vtkNIFTIImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeSpacing(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

