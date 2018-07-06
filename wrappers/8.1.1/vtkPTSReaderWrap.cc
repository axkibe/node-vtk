/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkPTSReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPTSReaderWrap::ptpl;

VtkPTSReaderWrap::VtkPTSReaderWrap()
{ }

VtkPTSReaderWrap::VtkPTSReaderWrap(vtkSmartPointer<vtkPTSReader> _native)
{ native = _native; }

VtkPTSReaderWrap::~VtkPTSReaderWrap()
{ }

void VtkPTSReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPTSReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PTSReader").ToLocalChecked(), ConstructorGetter);
}

void VtkPTSReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPTSReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPTSReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateCellsOff", CreateCellsOff);
	Nan::SetPrototypeMethod(tpl, "createCellsOff", CreateCellsOff);

	Nan::SetPrototypeMethod(tpl, "CreateCellsOn", CreateCellsOn);
	Nan::SetPrototypeMethod(tpl, "createCellsOn", CreateCellsOn);

	Nan::SetPrototypeMethod(tpl, "GetCreateCells", GetCreateCells);
	Nan::SetPrototypeMethod(tpl, "getCreateCells", GetCreateCells);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetIncludeColorAndLuminance", GetIncludeColorAndLuminance);
	Nan::SetPrototypeMethod(tpl, "getIncludeColorAndLuminance", GetIncludeColorAndLuminance);

	Nan::SetPrototypeMethod(tpl, "GetLimitReadToBounds", GetLimitReadToBounds);
	Nan::SetPrototypeMethod(tpl, "getLimitReadToBounds", GetLimitReadToBounds);

	Nan::SetPrototypeMethod(tpl, "GetLimitToMaxNumberOfPoints", GetLimitToMaxNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getLimitToMaxNumberOfPoints", GetLimitToMaxNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetOutputDataTypeIsDouble", GetOutputDataTypeIsDouble);
	Nan::SetPrototypeMethod(tpl, "getOutputDataTypeIsDouble", GetOutputDataTypeIsDouble);

	Nan::SetPrototypeMethod(tpl, "GetReadBounds", GetReadBounds);
	Nan::SetPrototypeMethod(tpl, "getReadBounds", GetReadBounds);

	Nan::SetPrototypeMethod(tpl, "IncludeColorAndLuminanceOff", IncludeColorAndLuminanceOff);
	Nan::SetPrototypeMethod(tpl, "includeColorAndLuminanceOff", IncludeColorAndLuminanceOff);

	Nan::SetPrototypeMethod(tpl, "IncludeColorAndLuminanceOn", IncludeColorAndLuminanceOn);
	Nan::SetPrototypeMethod(tpl, "includeColorAndLuminanceOn", IncludeColorAndLuminanceOn);

	Nan::SetPrototypeMethod(tpl, "LimitReadToBoundsOff", LimitReadToBoundsOff);
	Nan::SetPrototypeMethod(tpl, "limitReadToBoundsOff", LimitReadToBoundsOff);

	Nan::SetPrototypeMethod(tpl, "LimitReadToBoundsOn", LimitReadToBoundsOn);
	Nan::SetPrototypeMethod(tpl, "limitReadToBoundsOn", LimitReadToBoundsOn);

	Nan::SetPrototypeMethod(tpl, "LimitToMaxNumberOfPointsOff", LimitToMaxNumberOfPointsOff);
	Nan::SetPrototypeMethod(tpl, "limitToMaxNumberOfPointsOff", LimitToMaxNumberOfPointsOff);

	Nan::SetPrototypeMethod(tpl, "LimitToMaxNumberOfPointsOn", LimitToMaxNumberOfPointsOn);
	Nan::SetPrototypeMethod(tpl, "limitToMaxNumberOfPointsOn", LimitToMaxNumberOfPointsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutputDataTypeIsDoubleOff", OutputDataTypeIsDoubleOff);
	Nan::SetPrototypeMethod(tpl, "outputDataTypeIsDoubleOff", OutputDataTypeIsDoubleOff);

	Nan::SetPrototypeMethod(tpl, "OutputDataTypeIsDoubleOn", OutputDataTypeIsDoubleOn);
	Nan::SetPrototypeMethod(tpl, "outputDataTypeIsDoubleOn", OutputDataTypeIsDoubleOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCreateCells", SetCreateCells);
	Nan::SetPrototypeMethod(tpl, "setCreateCells", SetCreateCells);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetIncludeColorAndLuminance", SetIncludeColorAndLuminance);
	Nan::SetPrototypeMethod(tpl, "setIncludeColorAndLuminance", SetIncludeColorAndLuminance);

	Nan::SetPrototypeMethod(tpl, "SetLimitReadToBounds", SetLimitReadToBounds);
	Nan::SetPrototypeMethod(tpl, "setLimitReadToBounds", SetLimitReadToBounds);

	Nan::SetPrototypeMethod(tpl, "SetLimitToMaxNumberOfPoints", SetLimitToMaxNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "setLimitToMaxNumberOfPoints", SetLimitToMaxNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "SetOutputDataTypeIsDouble", SetOutputDataTypeIsDouble);
	Nan::SetPrototypeMethod(tpl, "setOutputDataTypeIsDouble", SetOutputDataTypeIsDouble);

	Nan::SetPrototypeMethod(tpl, "SetReadBounds", SetReadBounds);
	Nan::SetPrototypeMethod(tpl, "setReadBounds", SetReadBounds);

#ifdef VTK_NODE_PLUS_VTKPTSREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPTSREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPTSReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPTSReader> native = vtkSmartPointer<vtkPTSReader>::New();
		VtkPTSReaderWrap* obj = new VtkPTSReaderWrap(native);
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

void VtkPTSReaderWrap::CreateCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateCellsOff();
}

void VtkPTSReaderWrap::CreateCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateCellsOn();
}

void VtkPTSReaderWrap::GetCreateCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCreateCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPTSReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPTSReaderWrap::GetIncludeColorAndLuminance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIncludeColorAndLuminance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPTSReaderWrap::GetLimitReadToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLimitReadToBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPTSReaderWrap::GetLimitToMaxNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLimitToMaxNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPTSReaderWrap::GetOutputDataTypeIsDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputDataTypeIsDouble();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPTSReaderWrap::GetReadBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkPTSReaderWrap::IncludeColorAndLuminanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeColorAndLuminanceOff();
}

void VtkPTSReaderWrap::IncludeColorAndLuminanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeColorAndLuminanceOn();
}

void VtkPTSReaderWrap::LimitReadToBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LimitReadToBoundsOff();
}

void VtkPTSReaderWrap::LimitReadToBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LimitReadToBoundsOn();
}

void VtkPTSReaderWrap::LimitToMaxNumberOfPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LimitToMaxNumberOfPointsOff();
}

void VtkPTSReaderWrap::LimitToMaxNumberOfPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LimitToMaxNumberOfPointsOn();
}

void VtkPTSReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	vtkPTSReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPTSReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPTSReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPTSReaderWrap *w = new VtkPTSReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPTSReaderWrap::OutputDataTypeIsDoubleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutputDataTypeIsDoubleOff();
}

void VtkPTSReaderWrap::OutputDataTypeIsDoubleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutputDataTypeIsDoubleOn();
}

void VtkPTSReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPTSReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPTSReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPTSReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPTSReaderWrap *w = new VtkPTSReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPTSReaderWrap::SetCreateCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCreateCells(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPTSReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
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

void VtkPTSReaderWrap::SetIncludeColorAndLuminance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIncludeColorAndLuminance(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPTSReaderWrap::SetLimitReadToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLimitReadToBounds(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPTSReaderWrap::SetLimitToMaxNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLimitToMaxNumberOfPoints(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPTSReaderWrap::SetOutputDataTypeIsDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputDataTypeIsDouble(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPTSReaderWrap::SetReadBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPTSReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPTSReaderWrap>(info.Holder());
	vtkPTSReader *native = (vtkPTSReader *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->SetReadBounds(
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
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetReadBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

