/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkGeoProjectionWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoProjectionWrap::ptpl;

VtkGeoProjectionWrap::VtkGeoProjectionWrap()
{ }

VtkGeoProjectionWrap::VtkGeoProjectionWrap(vtkSmartPointer<vtkGeoProjection> _native)
{ native = _native; }

VtkGeoProjectionWrap::~VtkGeoProjectionWrap()
{ }

void VtkGeoProjectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoProjection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoProjection").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoProjectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoProjectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoProjectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClearOptionalParameters", ClearOptionalParameters);
	Nan::SetPrototypeMethod(tpl, "clearOptionalParameters", ClearOptionalParameters);

	Nan::SetPrototypeMethod(tpl, "GetCentralMeridian", GetCentralMeridian);
	Nan::SetPrototypeMethod(tpl, "getCentralMeridian", GetCentralMeridian);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDescription", GetDescription);
	Nan::SetPrototypeMethod(tpl, "getDescription", GetDescription);

	Nan::SetPrototypeMethod(tpl, "GetIndex", GetIndex);
	Nan::SetPrototypeMethod(tpl, "getIndex", GetIndex);

	Nan::SetPrototypeMethod(tpl, "GetName", GetName);
	Nan::SetPrototypeMethod(tpl, "getName", GetName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfOptionalParameters", GetNumberOfOptionalParameters);
	Nan::SetPrototypeMethod(tpl, "getNumberOfOptionalParameters", GetNumberOfOptionalParameters);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfProjections", GetNumberOfProjections);
	Nan::SetPrototypeMethod(tpl, "getNumberOfProjections", GetNumberOfProjections);

	Nan::SetPrototypeMethod(tpl, "GetOptionalParameterKey", GetOptionalParameterKey);
	Nan::SetPrototypeMethod(tpl, "getOptionalParameterKey", GetOptionalParameterKey);

	Nan::SetPrototypeMethod(tpl, "GetOptionalParameterValue", GetOptionalParameterValue);
	Nan::SetPrototypeMethod(tpl, "getOptionalParameterValue", GetOptionalParameterValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionDescription", GetProjectionDescription);
	Nan::SetPrototypeMethod(tpl, "getProjectionDescription", GetProjectionDescription);

	Nan::SetPrototypeMethod(tpl, "GetProjectionName", GetProjectionName);
	Nan::SetPrototypeMethod(tpl, "getProjectionName", GetProjectionName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveOptionalParameter", RemoveOptionalParameter);
	Nan::SetPrototypeMethod(tpl, "removeOptionalParameter", RemoveOptionalParameter);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCentralMeridian", SetCentralMeridian);
	Nan::SetPrototypeMethod(tpl, "setCentralMeridian", SetCentralMeridian);

	Nan::SetPrototypeMethod(tpl, "SetName", SetName);
	Nan::SetPrototypeMethod(tpl, "setName", SetName);

	Nan::SetPrototypeMethod(tpl, "SetOptionalParameter", SetOptionalParameter);
	Nan::SetPrototypeMethod(tpl, "setOptionalParameter", SetOptionalParameter);

#ifdef VTK_NODE_PLUS_VTKGEOPROJECTIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGEOPROJECTIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGeoProjectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoProjection> native = vtkSmartPointer<vtkGeoProjection>::New();
		VtkGeoProjectionWrap* obj = new VtkGeoProjectionWrap(native);
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

void VtkGeoProjectionWrap::ClearOptionalParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearOptionalParameters();
}

void VtkGeoProjectionWrap::GetCentralMeridian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCentralMeridian();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoProjectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoProjectionWrap::GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescription();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoProjectionWrap::GetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoProjectionWrap::GetName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoProjectionWrap::GetNumberOfOptionalParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfOptionalParameters();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoProjectionWrap::GetNumberOfProjections(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfProjections();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoProjectionWrap::GetOptionalParameterKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOptionalParameterKey(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoProjectionWrap::GetOptionalParameterValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOptionalParameterValue(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoProjectionWrap::GetProjectionDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetProjectionDescription(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoProjectionWrap::GetProjectionName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetProjectionName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoProjectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
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

void VtkGeoProjectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	vtkGeoProjection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGeoProjectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoProjectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoProjectionWrap *w = new VtkGeoProjectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoProjectionWrap::RemoveOptionalParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveOptionalParameter(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoProjectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoProjection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGeoProjectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoProjectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoProjectionWrap *w = new VtkGeoProjectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoProjectionWrap::SetCentralMeridian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCentralMeridian(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoProjectionWrap::SetName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoProjectionWrap::SetOptionalParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoProjectionWrap *wrapper = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info.Holder());
	vtkGeoProjection *native = (vtkGeoProjection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOptionalParameter(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

