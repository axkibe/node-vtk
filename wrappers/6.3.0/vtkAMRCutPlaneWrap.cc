/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkAMRCutPlaneWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkInformationWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMRCutPlaneWrap::ptpl;

VtkAMRCutPlaneWrap::VtkAMRCutPlaneWrap()
{ }

VtkAMRCutPlaneWrap::VtkAMRCutPlaneWrap(vtkSmartPointer<vtkAMRCutPlane> _native)
{ native = _native; }

VtkAMRCutPlaneWrap::~VtkAMRCutPlaneWrap()
{ }

void VtkAMRCutPlaneWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRCutPlane").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRCutPlane").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRCutPlaneWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRCutPlaneWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRCutPlaneWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "FillOutputPortInformation", FillOutputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillOutputPortInformation", FillOutputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetLevelOfResolution", GetLevelOfResolution);
	Nan::SetPrototypeMethod(tpl, "getLevelOfResolution", GetLevelOfResolution);

	Nan::SetPrototypeMethod(tpl, "GetUseNativeCutter", GetUseNativeCutter);
	Nan::SetPrototypeMethod(tpl, "getUseNativeCutter", GetUseNativeCutter);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetLevelOfResolution", SetLevelOfResolution);
	Nan::SetPrototypeMethod(tpl, "setLevelOfResolution", SetLevelOfResolution);

	Nan::SetPrototypeMethod(tpl, "SetNormal", SetNormal);
	Nan::SetPrototypeMethod(tpl, "setNormal", SetNormal);

	Nan::SetPrototypeMethod(tpl, "SetUseNativeCutter", SetUseNativeCutter);
	Nan::SetPrototypeMethod(tpl, "setUseNativeCutter", SetUseNativeCutter);

	Nan::SetPrototypeMethod(tpl, "UseNativeCutterOff", UseNativeCutterOff);
	Nan::SetPrototypeMethod(tpl, "useNativeCutterOff", UseNativeCutterOff);

	Nan::SetPrototypeMethod(tpl, "UseNativeCutterOn", UseNativeCutterOn);
	Nan::SetPrototypeMethod(tpl, "useNativeCutterOn", UseNativeCutterOn);

#ifdef VTK_NODE_PLUS_VTKAMRCUTPLANEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAMRCUTPLANEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAMRCutPlaneWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRCutPlane> native = vtkSmartPointer<vtkAMRCutPlane>::New();
		VtkAMRCutPlaneWrap* obj = new VtkAMRCutPlaneWrap(native);
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

void VtkAMRCutPlaneWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRCutPlaneWrap::FillOutputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillOutputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRCutPlaneWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRCutPlaneWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRCutPlaneWrap::GetLevelOfResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLevelOfResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRCutPlaneWrap::GetUseNativeCutter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseNativeCutter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRCutPlaneWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
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

void VtkAMRCutPlaneWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	vtkAMRCutPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAMRCutPlaneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMRCutPlaneWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRCutPlaneWrap *w = new VtkAMRCutPlaneWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRCutPlaneWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMRCutPlane * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAMRCutPlaneWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMRCutPlaneWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRCutPlaneWrap *w = new VtkAMRCutPlaneWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRCutPlaneWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCenter(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCenter(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCenter(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRCutPlaneWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRCutPlaneWrap::SetLevelOfResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLevelOfResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRCutPlaneWrap::SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormal(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormal(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetNormal(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRCutPlaneWrap::SetUseNativeCutter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseNativeCutter(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRCutPlaneWrap::UseNativeCutterOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseNativeCutterOff();
}

void VtkAMRCutPlaneWrap::UseNativeCutterOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRCutPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkAMRCutPlaneWrap>(info.Holder());
	vtkAMRCutPlane *native = (vtkAMRCutPlane *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseNativeCutterOn();
}

