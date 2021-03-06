/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTemporalPathLineFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataSetWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTemporalPathLineFilterWrap::ptpl;

VtkTemporalPathLineFilterWrap::VtkTemporalPathLineFilterWrap()
{ }

VtkTemporalPathLineFilterWrap::VtkTemporalPathLineFilterWrap(vtkSmartPointer<vtkTemporalPathLineFilter> _native)
{ native = _native; }

VtkTemporalPathLineFilterWrap::~VtkTemporalPathLineFilterWrap()
{ }

void VtkTemporalPathLineFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTemporalPathLineFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TemporalPathLineFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkTemporalPathLineFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTemporalPathLineFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTemporalPathLineFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Flush", Flush);
	Nan::SetPrototypeMethod(tpl, "flush", Flush);

	Nan::SetPrototypeMethod(tpl, "GetIdChannelArray", GetIdChannelArray);
	Nan::SetPrototypeMethod(tpl, "getIdChannelArray", GetIdChannelArray);

	Nan::SetPrototypeMethod(tpl, "GetKeepDeadTrails", GetKeepDeadTrails);
	Nan::SetPrototypeMethod(tpl, "getKeepDeadTrails", GetKeepDeadTrails);

	Nan::SetPrototypeMethod(tpl, "GetMaskPoints", GetMaskPoints);
	Nan::SetPrototypeMethod(tpl, "getMaskPoints", GetMaskPoints);

	Nan::SetPrototypeMethod(tpl, "GetMaxStepDistance", GetMaxStepDistance);
	Nan::SetPrototypeMethod(tpl, "getMaxStepDistance", GetMaxStepDistance);

	Nan::SetPrototypeMethod(tpl, "GetMaxTrackLength", GetMaxTrackLength);
	Nan::SetPrototypeMethod(tpl, "getMaxTrackLength", GetMaxTrackLength);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetIdChannelArray", SetIdChannelArray);
	Nan::SetPrototypeMethod(tpl, "setIdChannelArray", SetIdChannelArray);

	Nan::SetPrototypeMethod(tpl, "SetKeepDeadTrails", SetKeepDeadTrails);
	Nan::SetPrototypeMethod(tpl, "setKeepDeadTrails", SetKeepDeadTrails);

	Nan::SetPrototypeMethod(tpl, "SetMaskPoints", SetMaskPoints);
	Nan::SetPrototypeMethod(tpl, "setMaskPoints", SetMaskPoints);

	Nan::SetPrototypeMethod(tpl, "SetMaxStepDistance", SetMaxStepDistance);
	Nan::SetPrototypeMethod(tpl, "setMaxStepDistance", SetMaxStepDistance);

	Nan::SetPrototypeMethod(tpl, "SetMaxTrackLength", SetMaxTrackLength);
	Nan::SetPrototypeMethod(tpl, "setMaxTrackLength", SetMaxTrackLength);

	Nan::SetPrototypeMethod(tpl, "SetSelectionConnection", SetSelectionConnection);
	Nan::SetPrototypeMethod(tpl, "setSelectionConnection", SetSelectionConnection);

	Nan::SetPrototypeMethod(tpl, "SetSelectionData", SetSelectionData);
	Nan::SetPrototypeMethod(tpl, "setSelectionData", SetSelectionData);

#ifdef VTK_NODE_PLUS_VTKTEMPORALPATHLINEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTEMPORALPATHLINEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTemporalPathLineFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTemporalPathLineFilter> native = vtkSmartPointer<vtkTemporalPathLineFilter>::New();
		VtkTemporalPathLineFilterWrap* obj = new VtkTemporalPathLineFilterWrap(native);
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

void VtkTemporalPathLineFilterWrap::Flush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Flush();
}

void VtkTemporalPathLineFilterWrap::GetIdChannelArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIdChannelArray();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTemporalPathLineFilterWrap::GetKeepDeadTrails(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKeepDeadTrails();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalPathLineFilterWrap::GetMaskPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaskPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalPathLineFilterWrap::GetMaxStepDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxStepDistance();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkTemporalPathLineFilterWrap::GetMaxTrackLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxTrackLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalPathLineFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	vtkTemporalPathLineFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTemporalPathLineFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTemporalPathLineFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTemporalPathLineFilterWrap *w = new VtkTemporalPathLineFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTemporalPathLineFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTemporalPathLineFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTemporalPathLineFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTemporalPathLineFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTemporalPathLineFilterWrap *w = new VtkTemporalPathLineFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalPathLineFilterWrap::SetIdChannelArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIdChannelArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalPathLineFilterWrap::SetKeepDeadTrails(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetKeepDeadTrails(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalPathLineFilterWrap::SetMaskPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalPathLineFilterWrap::SetMaxStepDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
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
		native->SetMaxStepDistance(
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
		native->SetMaxStepDistance(
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
				native->SetMaxStepDistance(
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

void VtkTemporalPathLineFilterWrap::SetMaxTrackLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxTrackLength(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalPathLineFilterWrap::SetSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalPathLineFilterWrap::SetSelectionData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalPathLineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalPathLineFilterWrap>(info.Holder());
	vtkTemporalPathLineFilter *native = (vtkTemporalPathLineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionData(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

