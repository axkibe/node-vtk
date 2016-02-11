/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleFlightWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleFlightWrap::ptpl;

VtkInteractorStyleFlightWrap::VtkInteractorStyleFlightWrap()
{ }

VtkInteractorStyleFlightWrap::VtkInteractorStyleFlightWrap(vtkSmartPointer<vtkInteractorStyleFlight> _native)
{ native = _native; }

VtkInteractorStyleFlightWrap::~VtkInteractorStyleFlightWrap()
{ }

void VtkInteractorStyleFlightWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleFlight").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleFlight").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleFlightWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleFlightWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleFlightWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DisableMotionOff", DisableMotionOff);
	Nan::SetPrototypeMethod(tpl, "disableMotionOff", DisableMotionOff);

	Nan::SetPrototypeMethod(tpl, "DisableMotionOn", DisableMotionOn);
	Nan::SetPrototypeMethod(tpl, "disableMotionOn", DisableMotionOn);

	Nan::SetPrototypeMethod(tpl, "EndForwardFly", EndForwardFly);
	Nan::SetPrototypeMethod(tpl, "endForwardFly", EndForwardFly);

	Nan::SetPrototypeMethod(tpl, "EndReverseFly", EndReverseFly);
	Nan::SetPrototypeMethod(tpl, "endReverseFly", EndReverseFly);

	Nan::SetPrototypeMethod(tpl, "ForwardFly", ForwardFly);
	Nan::SetPrototypeMethod(tpl, "forwardFly", ForwardFly);

	Nan::SetPrototypeMethod(tpl, "GetAngleAccelerationFactor", GetAngleAccelerationFactor);
	Nan::SetPrototypeMethod(tpl, "getAngleAccelerationFactor", GetAngleAccelerationFactor);

	Nan::SetPrototypeMethod(tpl, "GetAngleStepSize", GetAngleStepSize);
	Nan::SetPrototypeMethod(tpl, "getAngleStepSize", GetAngleStepSize);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultUpVector", GetDefaultUpVector);
	Nan::SetPrototypeMethod(tpl, "getDefaultUpVector", GetDefaultUpVector);

	Nan::SetPrototypeMethod(tpl, "GetDisableMotion", GetDisableMotion);
	Nan::SetPrototypeMethod(tpl, "getDisableMotion", GetDisableMotion);

	Nan::SetPrototypeMethod(tpl, "GetMotionAccelerationFactor", GetMotionAccelerationFactor);
	Nan::SetPrototypeMethod(tpl, "getMotionAccelerationFactor", GetMotionAccelerationFactor);

	Nan::SetPrototypeMethod(tpl, "GetMotionStepSize", GetMotionStepSize);
	Nan::SetPrototypeMethod(tpl, "getMotionStepSize", GetMotionStepSize);

	Nan::SetPrototypeMethod(tpl, "GetRestoreUpVector", GetRestoreUpVector);
	Nan::SetPrototypeMethod(tpl, "getRestoreUpVector", GetRestoreUpVector);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "JumpTo", JumpTo);
	Nan::SetPrototypeMethod(tpl, "jumpTo", JumpTo);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "OnKeyDown", OnKeyDown);
	Nan::SetPrototypeMethod(tpl, "onKeyDown", OnKeyDown);

	Nan::SetPrototypeMethod(tpl, "OnKeyUp", OnKeyUp);
	Nan::SetPrototypeMethod(tpl, "onKeyUp", OnKeyUp);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonDown", OnLeftButtonDown);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonDown", OnLeftButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonDown", OnMiddleButtonDown);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonDown", OnMiddleButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonUp", OnMiddleButtonUp);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonUp", OnMiddleButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonDown", OnRightButtonDown);
	Nan::SetPrototypeMethod(tpl, "onRightButtonDown", OnRightButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonUp", OnRightButtonUp);
	Nan::SetPrototypeMethod(tpl, "onRightButtonUp", OnRightButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnTimer", OnTimer);
	Nan::SetPrototypeMethod(tpl, "onTimer", OnTimer);

	Nan::SetPrototypeMethod(tpl, "RestoreUpVectorOff", RestoreUpVectorOff);
	Nan::SetPrototypeMethod(tpl, "restoreUpVectorOff", RestoreUpVectorOff);

	Nan::SetPrototypeMethod(tpl, "RestoreUpVectorOn", RestoreUpVectorOn);
	Nan::SetPrototypeMethod(tpl, "restoreUpVectorOn", RestoreUpVectorOn);

	Nan::SetPrototypeMethod(tpl, "ReverseFly", ReverseFly);
	Nan::SetPrototypeMethod(tpl, "reverseFly", ReverseFly);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAngleAccelerationFactor", SetAngleAccelerationFactor);
	Nan::SetPrototypeMethod(tpl, "setAngleAccelerationFactor", SetAngleAccelerationFactor);

	Nan::SetPrototypeMethod(tpl, "SetAngleStepSize", SetAngleStepSize);
	Nan::SetPrototypeMethod(tpl, "setAngleStepSize", SetAngleStepSize);

	Nan::SetPrototypeMethod(tpl, "SetDefaultUpVector", SetDefaultUpVector);
	Nan::SetPrototypeMethod(tpl, "setDefaultUpVector", SetDefaultUpVector);

	Nan::SetPrototypeMethod(tpl, "SetDisableMotion", SetDisableMotion);
	Nan::SetPrototypeMethod(tpl, "setDisableMotion", SetDisableMotion);

	Nan::SetPrototypeMethod(tpl, "SetMotionAccelerationFactor", SetMotionAccelerationFactor);
	Nan::SetPrototypeMethod(tpl, "setMotionAccelerationFactor", SetMotionAccelerationFactor);

	Nan::SetPrototypeMethod(tpl, "SetMotionStepSize", SetMotionStepSize);
	Nan::SetPrototypeMethod(tpl, "setMotionStepSize", SetMotionStepSize);

	Nan::SetPrototypeMethod(tpl, "SetRestoreUpVector", SetRestoreUpVector);
	Nan::SetPrototypeMethod(tpl, "setRestoreUpVector", SetRestoreUpVector);

	Nan::SetPrototypeMethod(tpl, "StartForwardFly", StartForwardFly);
	Nan::SetPrototypeMethod(tpl, "startForwardFly", StartForwardFly);

	Nan::SetPrototypeMethod(tpl, "StartReverseFly", StartReverseFly);
	Nan::SetPrototypeMethod(tpl, "startReverseFly", StartReverseFly);

	ptpl.Reset( tpl );
}

void VtkInteractorStyleFlightWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleFlight> native = vtkSmartPointer<vtkInteractorStyleFlight>::New();
		VtkInteractorStyleFlightWrap* obj = new VtkInteractorStyleFlightWrap(native);
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

void VtkInteractorStyleFlightWrap::DisableMotionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableMotionOff();
}

void VtkInteractorStyleFlightWrap::DisableMotionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableMotionOn();
}

void VtkInteractorStyleFlightWrap::EndForwardFly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndForwardFly();
}

void VtkInteractorStyleFlightWrap::EndReverseFly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndReverseFly();
}

void VtkInteractorStyleFlightWrap::ForwardFly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForwardFly();
}

void VtkInteractorStyleFlightWrap::GetAngleAccelerationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleAccelerationFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleFlightWrap::GetAngleStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleStepSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleFlightWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleFlightWrap::GetDefaultUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultUpVector();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkInteractorStyleFlightWrap::GetDisableMotion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisableMotion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleFlightWrap::GetMotionAccelerationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMotionAccelerationFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleFlightWrap::GetMotionStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMotionStepSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleFlightWrap::GetRestoreUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRestoreUpVector();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleFlightWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
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

void VtkInteractorStyleFlightWrap::JumpTo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->JumpTo(
				(double *)(a0->Buffer()->GetContents().Data()),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->JumpTo(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			return;
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->JumpTo(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->JumpTo(
				b0,
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	vtkInteractorStyleFlight * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyleFlightWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleFlightWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleFlightWrap *w = new VtkInteractorStyleFlightWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleFlightWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkInteractorStyleFlightWrap::OnKeyDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnKeyDown();
}

void VtkInteractorStyleFlightWrap::OnKeyUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnKeyUp();
}

void VtkInteractorStyleFlightWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleFlightWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleFlightWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleFlightWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleFlightWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleFlightWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleFlightWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleFlightWrap::OnTimer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnTimer();
}

void VtkInteractorStyleFlightWrap::RestoreUpVectorOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RestoreUpVectorOff();
}

void VtkInteractorStyleFlightWrap::RestoreUpVectorOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RestoreUpVectorOn();
}

void VtkInteractorStyleFlightWrap::ReverseFly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseFly();
}

void VtkInteractorStyleFlightWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleFlight * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkInteractorStyleFlightWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleFlightWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleFlightWrap *w = new VtkInteractorStyleFlightWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::SetAngleAccelerationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAngleAccelerationFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::SetAngleStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAngleStepSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::SetDefaultUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
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
		native->SetDefaultUpVector(
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
		native->SetDefaultUpVector(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::SetDisableMotion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisableMotion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::SetMotionAccelerationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMotionAccelerationFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::SetMotionStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMotionStepSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::SetRestoreUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRestoreUpVector(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleFlightWrap::StartForwardFly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartForwardFly();
}

void VtkInteractorStyleFlightWrap::StartReverseFly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleFlightWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleFlightWrap>(info.Holder());
	vtkInteractorStyleFlight *native = (vtkInteractorStyleFlight *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartReverseFly();
}

