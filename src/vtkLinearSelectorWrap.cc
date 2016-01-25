/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSelectionAlgorithmWrap.h"
#include "vtkLinearSelectorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLinearSelectorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLinearSelectorWrap::ptpl;

VtkLinearSelectorWrap::VtkLinearSelectorWrap()
{ }

VtkLinearSelectorWrap::VtkLinearSelectorWrap(vtkSmartPointer<vtkLinearSelector> _native)
{ native = _native; }

VtkLinearSelectorWrap::~VtkLinearSelectorWrap()
{ }

void VtkLinearSelectorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSelectionAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSelectionAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkLinearSelectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkLinearSelector").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("LinearSelector").ToLocalChecked(),tpl->GetFunction());
}

void VtkLinearSelectorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetVertexEliminationTolerance", GetVertexEliminationTolerance);
	Nan::SetPrototypeMethod(tpl, "getVertexEliminationTolerance", GetVertexEliminationTolerance);

	Nan::SetPrototypeMethod(tpl, "GetVertexEliminationToleranceMaxValue", GetVertexEliminationToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getVertexEliminationToleranceMaxValue", GetVertexEliminationToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetVertexEliminationToleranceMinValue", GetVertexEliminationToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getVertexEliminationToleranceMinValue", GetVertexEliminationToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "IncludeVerticesOff", IncludeVerticesOff);
	Nan::SetPrototypeMethod(tpl, "includeVerticesOff", IncludeVerticesOff);

	Nan::SetPrototypeMethod(tpl, "IncludeVerticesOn", IncludeVerticesOn);
	Nan::SetPrototypeMethod(tpl, "includeVerticesOn", IncludeVerticesOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEndPoint", SetEndPoint);
	Nan::SetPrototypeMethod(tpl, "setEndPoint", SetEndPoint);

	Nan::SetPrototypeMethod(tpl, "SetPoints", SetPoints);
	Nan::SetPrototypeMethod(tpl, "setPoints", SetPoints);

	Nan::SetPrototypeMethod(tpl, "SetStartPoint", SetStartPoint);
	Nan::SetPrototypeMethod(tpl, "setStartPoint", SetStartPoint);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "SetVertexEliminationTolerance", SetVertexEliminationTolerance);
	Nan::SetPrototypeMethod(tpl, "setVertexEliminationTolerance", SetVertexEliminationTolerance);

}

void VtkLinearSelectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLinearSelector> native = vtkSmartPointer<vtkLinearSelector>::New();
		VtkLinearSelectorWrap* obj = new VtkLinearSelectorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLinearSelectorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLinearSelectorWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLinearSelectorWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearSelectorWrap::GetVertexEliminationTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexEliminationTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearSelectorWrap::GetVertexEliminationToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexEliminationToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearSelectorWrap::GetVertexEliminationToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexEliminationToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearSelectorWrap::IncludeVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeVerticesOff();
}

void VtkLinearSelectorWrap::IncludeVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeVerticesOn();
}

void VtkLinearSelectorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkLinearSelectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	vtkLinearSelector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLinearSelectorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLinearSelectorWrap *w = new VtkLinearSelectorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLinearSelectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLinearSelector * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkLinearSelectorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLinearSelectorWrap *w = new VtkLinearSelectorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearSelectorWrap::SetEndPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetEndPoint(
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

void VtkLinearSelectorWrap::SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoints(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearSelectorWrap::SetStartPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetStartPoint(
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

void VtkLinearSelectorWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearSelectorWrap::SetVertexEliminationTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearSelectorWrap>(info.Holder());
	vtkLinearSelector *native = (vtkLinearSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVertexEliminationTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

