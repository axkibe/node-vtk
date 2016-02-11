/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkExtractUnstructuredGridWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractUnstructuredGridWrap::ptpl;

VtkExtractUnstructuredGridWrap::VtkExtractUnstructuredGridWrap()
{ }

VtkExtractUnstructuredGridWrap::VtkExtractUnstructuredGridWrap(vtkSmartPointer<vtkExtractUnstructuredGrid> _native)
{ native = _native; }

VtkExtractUnstructuredGridWrap::~VtkExtractUnstructuredGridWrap()
{ }

void VtkExtractUnstructuredGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractUnstructuredGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractUnstructuredGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractUnstructuredGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractUnstructuredGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractUnstructuredGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CellClippingOff", CellClippingOff);
	Nan::SetPrototypeMethod(tpl, "cellClippingOff", CellClippingOff);

	Nan::SetPrototypeMethod(tpl, "CellClippingOn", CellClippingOn);
	Nan::SetPrototypeMethod(tpl, "cellClippingOn", CellClippingOn);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "ExtentClippingOff", ExtentClippingOff);
	Nan::SetPrototypeMethod(tpl, "extentClippingOff", ExtentClippingOff);

	Nan::SetPrototypeMethod(tpl, "ExtentClippingOn", ExtentClippingOn);
	Nan::SetPrototypeMethod(tpl, "extentClippingOn", ExtentClippingOn);

	Nan::SetPrototypeMethod(tpl, "GetCellClipping", GetCellClipping);
	Nan::SetPrototypeMethod(tpl, "getCellClipping", GetCellClipping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExtent", GetExtent);
	Nan::SetPrototypeMethod(tpl, "getExtent", GetExtent);

	Nan::SetPrototypeMethod(tpl, "GetExtentClipping", GetExtentClipping);
	Nan::SetPrototypeMethod(tpl, "getExtentClipping", GetExtentClipping);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetMerging", GetMerging);
	Nan::SetPrototypeMethod(tpl, "getMerging", GetMerging);

	Nan::SetPrototypeMethod(tpl, "GetPointClipping", GetPointClipping);
	Nan::SetPrototypeMethod(tpl, "getPointClipping", GetPointClipping);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MergingOff", MergingOff);
	Nan::SetPrototypeMethod(tpl, "mergingOff", MergingOff);

	Nan::SetPrototypeMethod(tpl, "MergingOn", MergingOn);
	Nan::SetPrototypeMethod(tpl, "mergingOn", MergingOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PointClippingOff", PointClippingOff);
	Nan::SetPrototypeMethod(tpl, "pointClippingOff", PointClippingOff);

	Nan::SetPrototypeMethod(tpl, "PointClippingOn", PointClippingOn);
	Nan::SetPrototypeMethod(tpl, "pointClippingOn", PointClippingOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellClipping", SetCellClipping);
	Nan::SetPrototypeMethod(tpl, "setCellClipping", SetCellClipping);

	Nan::SetPrototypeMethod(tpl, "SetExtent", SetExtent);
	Nan::SetPrototypeMethod(tpl, "setExtent", SetExtent);

	Nan::SetPrototypeMethod(tpl, "SetExtentClipping", SetExtentClipping);
	Nan::SetPrototypeMethod(tpl, "setExtentClipping", SetExtentClipping);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetMerging", SetMerging);
	Nan::SetPrototypeMethod(tpl, "setMerging", SetMerging);

	Nan::SetPrototypeMethod(tpl, "SetPointClipping", SetPointClipping);
	Nan::SetPrototypeMethod(tpl, "setPointClipping", SetPointClipping);

	ptpl.Reset( tpl );
}

void VtkExtractUnstructuredGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractUnstructuredGrid> native = vtkSmartPointer<vtkExtractUnstructuredGrid>::New();
		VtkExtractUnstructuredGridWrap* obj = new VtkExtractUnstructuredGridWrap(native);
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

void VtkExtractUnstructuredGridWrap::CellClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CellClippingOff();
}

void VtkExtractUnstructuredGridWrap::CellClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CellClippingOn();
}

void VtkExtractUnstructuredGridWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkExtractUnstructuredGridWrap::ExtentClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtentClippingOff();
}

void VtkExtractUnstructuredGridWrap::ExtentClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtentClippingOn();
}

void VtkExtractUnstructuredGridWrap::GetCellClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellClipping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractUnstructuredGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractUnstructuredGridWrap::GetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtent();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkExtractUnstructuredGridWrap::GetExtentClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtentClipping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractUnstructuredGridWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	VtkIncrementalPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractUnstructuredGridWrap::GetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMerging();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractUnstructuredGridWrap::GetPointClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointClipping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractUnstructuredGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
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

void VtkExtractUnstructuredGridWrap::MergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOff();
}

void VtkExtractUnstructuredGridWrap::MergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOn();
}

void VtkExtractUnstructuredGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	vtkExtractUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkExtractUnstructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractUnstructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractUnstructuredGridWrap *w = new VtkExtractUnstructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractUnstructuredGridWrap::PointClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PointClippingOff();
}

void VtkExtractUnstructuredGridWrap::PointClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PointClippingOn();
}

void VtkExtractUnstructuredGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractUnstructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkExtractUnstructuredGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractUnstructuredGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractUnstructuredGridWrap *w = new VtkExtractUnstructuredGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractUnstructuredGridWrap::SetCellClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellClipping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractUnstructuredGridWrap::SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
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
		native->SetExtent(
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
		native->SetExtent(
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
							native->SetExtent(
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

void VtkExtractUnstructuredGridWrap::SetExtentClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtentClipping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractUnstructuredGridWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractUnstructuredGridWrap::SetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMerging(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractUnstructuredGridWrap::SetPointClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractUnstructuredGridWrap>(info.Holder());
	vtkExtractUnstructuredGrid *native = (vtkExtractUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointClipping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

