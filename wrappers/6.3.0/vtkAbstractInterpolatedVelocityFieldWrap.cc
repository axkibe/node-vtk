/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkFunctionSetWrap.h"
#include "vtkAbstractInterpolatedVelocityFieldWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractInterpolatedVelocityFieldWrap::ptpl;

VtkAbstractInterpolatedVelocityFieldWrap::VtkAbstractInterpolatedVelocityFieldWrap()
{ }

VtkAbstractInterpolatedVelocityFieldWrap::VtkAbstractInterpolatedVelocityFieldWrap(vtkSmartPointer<vtkAbstractInterpolatedVelocityField> _native)
{ native = _native; }

VtkAbstractInterpolatedVelocityFieldWrap::~VtkAbstractInterpolatedVelocityFieldWrap()
{ }

void VtkAbstractInterpolatedVelocityFieldWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractInterpolatedVelocityField").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractInterpolatedVelocityField").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractInterpolatedVelocityFieldWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractInterpolatedVelocityFieldWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkFunctionSetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkFunctionSetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractInterpolatedVelocityFieldWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClearLastCellId", ClearLastCellId);
	Nan::SetPrototypeMethod(tpl, "clearLastCellId", ClearLastCellId);

	Nan::SetPrototypeMethod(tpl, "CopyParameters", CopyParameters);
	Nan::SetPrototypeMethod(tpl, "copyParameters", CopyParameters);

	Nan::SetPrototypeMethod(tpl, "GetCacheHit", GetCacheHit);
	Nan::SetPrototypeMethod(tpl, "getCacheHit", GetCacheHit);

	Nan::SetPrototypeMethod(tpl, "GetCacheMiss", GetCacheMiss);
	Nan::SetPrototypeMethod(tpl, "getCacheMiss", GetCacheMiss);

	Nan::SetPrototypeMethod(tpl, "GetCaching", GetCaching);
	Nan::SetPrototypeMethod(tpl, "getCaching", GetCaching);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetForceSurfaceTangentVector", GetForceSurfaceTangentVector);
	Nan::SetPrototypeMethod(tpl, "getForceSurfaceTangentVector", GetForceSurfaceTangentVector);

	Nan::SetPrototypeMethod(tpl, "GetLastDataSet", GetLastDataSet);
	Nan::SetPrototypeMethod(tpl, "getLastDataSet", GetLastDataSet);

	Nan::SetPrototypeMethod(tpl, "GetLastLocalCoordinates", GetLastLocalCoordinates);
	Nan::SetPrototypeMethod(tpl, "getLastLocalCoordinates", GetLastLocalCoordinates);

	Nan::SetPrototypeMethod(tpl, "GetNormalizeVector", GetNormalizeVector);
	Nan::SetPrototypeMethod(tpl, "getNormalizeVector", GetNormalizeVector);

	Nan::SetPrototypeMethod(tpl, "GetSurfaceDataset", GetSurfaceDataset);
	Nan::SetPrototypeMethod(tpl, "getSurfaceDataset", GetSurfaceDataset);

	Nan::SetPrototypeMethod(tpl, "GetVectorsSelection", GetVectorsSelection);
	Nan::SetPrototypeMethod(tpl, "getVectorsSelection", GetVectorsSelection);

	Nan::SetPrototypeMethod(tpl, "GetVectorsType", GetVectorsType);
	Nan::SetPrototypeMethod(tpl, "getVectorsType", GetVectorsType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectVectors", SelectVectors);
	Nan::SetPrototypeMethod(tpl, "selectVectors", SelectVectors);

	Nan::SetPrototypeMethod(tpl, "SetCaching", SetCaching);
	Nan::SetPrototypeMethod(tpl, "setCaching", SetCaching);

	Nan::SetPrototypeMethod(tpl, "SetForceSurfaceTangentVector", SetForceSurfaceTangentVector);
	Nan::SetPrototypeMethod(tpl, "setForceSurfaceTangentVector", SetForceSurfaceTangentVector);

	Nan::SetPrototypeMethod(tpl, "SetNormalizeVector", SetNormalizeVector);
	Nan::SetPrototypeMethod(tpl, "setNormalizeVector", SetNormalizeVector);

	Nan::SetPrototypeMethod(tpl, "SetSurfaceDataset", SetSurfaceDataset);
	Nan::SetPrototypeMethod(tpl, "setSurfaceDataset", SetSurfaceDataset);

	ptpl.Reset( tpl );
}

void VtkAbstractInterpolatedVelocityFieldWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkAbstractInterpolatedVelocityFieldWrap::ClearLastCellId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearLastCellId();
}

void VtkAbstractInterpolatedVelocityFieldWrap::CopyParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractInterpolatedVelocityFieldWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractInterpolatedVelocityFieldWrap *a0 = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyParameters(
			(vtkAbstractInterpolatedVelocityField *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetCacheHit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCacheHit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetCacheMiss(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCacheMiss();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetCaching(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCaching();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetForceSurfaceTangentVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForceSurfaceTangentVector();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetLastDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastDataSet();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetLastLocalCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLastLocalCoordinates(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
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
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLastLocalCoordinates(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetNormalizeVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalizeVector();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetSurfaceDataset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSurfaceDataset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetVectorsSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorsSelection();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractInterpolatedVelocityFieldWrap::GetVectorsType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorsType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractInterpolatedVelocityFieldWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
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

void VtkAbstractInterpolatedVelocityFieldWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkAbstractInterpolatedVelocityField * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractInterpolatedVelocityFieldWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractInterpolatedVelocityFieldWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractInterpolatedVelocityFieldWrap *w = new VtkAbstractInterpolatedVelocityFieldWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractInterpolatedVelocityFieldWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractInterpolatedVelocityField * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractInterpolatedVelocityFieldWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractInterpolatedVelocityFieldWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractInterpolatedVelocityFieldWrap *w = new VtkAbstractInterpolatedVelocityFieldWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractInterpolatedVelocityFieldWrap::SelectVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SelectVectors(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractInterpolatedVelocityFieldWrap::SetCaching(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCaching(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractInterpolatedVelocityFieldWrap::SetForceSurfaceTangentVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetForceSurfaceTangentVector(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractInterpolatedVelocityFieldWrap::SetNormalizeVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalizeVector(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractInterpolatedVelocityFieldWrap::SetSurfaceDataset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info.Holder());
	vtkAbstractInterpolatedVelocityField *native = (vtkAbstractInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSurfaceDataset(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

