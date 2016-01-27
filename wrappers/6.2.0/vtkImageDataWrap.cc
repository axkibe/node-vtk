/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkInformationWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageDataWrap::ptpl;

VtkImageDataWrap::VtkImageDataWrap()
{ }

VtkImageDataWrap::VtkImageDataWrap(vtkSmartPointer<vtkImageData> _native)
{ native = _native; }

VtkImageDataWrap::~VtkImageDataWrap()
{ }

void VtkImageDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageData").ToLocalChecked(), ConstructorGetter);
}

void VtkImageDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AllocateScalars", AllocateScalars);
	Nan::SetPrototypeMethod(tpl, "allocateScalars", AllocateScalars);

	Nan::SetPrototypeMethod(tpl, "ComputeBounds", ComputeBounds);
	Nan::SetPrototypeMethod(tpl, "computeBounds", ComputeBounds);

	Nan::SetPrototypeMethod(tpl, "CopyAndCastFrom", CopyAndCastFrom);
	Nan::SetPrototypeMethod(tpl, "copyAndCastFrom", CopyAndCastFrom);

	Nan::SetPrototypeMethod(tpl, "CopyInformationFromPipeline", CopyInformationFromPipeline);
	Nan::SetPrototypeMethod(tpl, "copyInformationFromPipeline", CopyInformationFromPipeline);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataDimension", GetDataDimension);
	Nan::SetPrototypeMethod(tpl, "getDataDimension", GetDataDimension);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetExtentType", GetExtentType);
	Nan::SetPrototypeMethod(tpl, "getExtentType", GetExtentType);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfScalarComponents", GetNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfScalarComponents", GetNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "GetScalarComponentAsDouble", GetScalarComponentAsDouble);
	Nan::SetPrototypeMethod(tpl, "getScalarComponentAsDouble", GetScalarComponentAsDouble);

	Nan::SetPrototypeMethod(tpl, "GetScalarSize", GetScalarSize);
	Nan::SetPrototypeMethod(tpl, "getScalarSize", GetScalarSize);

	Nan::SetPrototypeMethod(tpl, "GetScalarType", GetScalarType);
	Nan::SetPrototypeMethod(tpl, "getScalarType", GetScalarType);

	Nan::SetPrototypeMethod(tpl, "GetScalarTypeAsString", GetScalarTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getScalarTypeAsString", GetScalarTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetScalarTypeMax", GetScalarTypeMax);
	Nan::SetPrototypeMethod(tpl, "getScalarTypeMax", GetScalarTypeMax);

	Nan::SetPrototypeMethod(tpl, "GetScalarTypeMin", GetScalarTypeMin);
	Nan::SetPrototypeMethod(tpl, "getScalarTypeMin", GetScalarTypeMin);

	Nan::SetPrototypeMethod(tpl, "GetVoxelGradient", GetVoxelGradient);
	Nan::SetPrototypeMethod(tpl, "getVoxelGradient", GetVoxelGradient);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrepareForNewData", PrepareForNewData);
	Nan::SetPrototypeMethod(tpl, "prepareForNewData", PrepareForNewData);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimensions", SetDimensions);
	Nan::SetPrototypeMethod(tpl, "setDimensions", SetDimensions);

	Nan::SetPrototypeMethod(tpl, "SetExtent", SetExtent);
	Nan::SetPrototypeMethod(tpl, "setExtent", SetExtent);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfScalarComponents", SetNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "setNumberOfScalarComponents", SetNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetScalarComponentFromDouble", SetScalarComponentFromDouble);
	Nan::SetPrototypeMethod(tpl, "setScalarComponentFromDouble", SetScalarComponentFromDouble);

	Nan::SetPrototypeMethod(tpl, "SetScalarType", SetScalarType);
	Nan::SetPrototypeMethod(tpl, "setScalarType", SetScalarType);

	Nan::SetPrototypeMethod(tpl, "SetSpacing", SetSpacing);
	Nan::SetPrototypeMethod(tpl, "setSpacing", SetSpacing);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkImageDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageData> native = vtkSmartPointer<vtkImageData>::New();
		VtkImageDataWrap* obj = new VtkImageDataWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageDataWrap::AllocateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AllocateScalars(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AllocateScalars(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeBounds();
}

void VtkImageDataWrap::CopyAndCastFrom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->CopyAndCastFrom(
									(vtkImageData *) a0->native.GetPointer(),
									info[1]->Int32Value(),
									info[2]->Int32Value(),
									info[3]->Int32Value(),
									info[4]->Int32Value(),
									info[5]->Int32Value(),
									info[6]->Int32Value()
								);
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::CopyInformationFromPipeline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyInformationFromPipeline(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDataWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkImageData * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkImageDataWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkImageDataWrap *w = new VtkImageDataWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkImageData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkImageDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataWrap *w = new VtkImageDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::GetDataDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetExtentType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtentType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfScalarComponents(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfScalarComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetScalarComponentAsDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetScalarComponentAsDouble(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::GetScalarSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarSize(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarType(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDataWrap::GetScalarTypeMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarTypeMax(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarTypeMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetScalarTypeMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarTypeMin(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarTypeMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataWrap::GetVoxelGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkDataArrayWrap *a3 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkDataArrayWrap *a4 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[4]->ToObject());
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->GetVoxelGradient(
							info[0]->Int32Value(),
							info[1]->Int32Value(),
							info[2]->Int32Value(),
							(vtkDataArray *) a3->native.GetPointer(),
							(vtkDataArray *) a4->native.GetPointer()
						);
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkImageDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
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

void VtkImageDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDataWrap::PrepareForNewData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PrepareForNewData();
}

void VtkImageDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataWrap *w = new VtkImageDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetDimensions(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
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

void VtkImageDataWrap::SetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetNumberOfScalarComponents(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
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
				native->SetOrigin(
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

void VtkImageDataWrap::SetScalarComponentFromDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->SetScalarComponentFromDouble(
							info[0]->Int32Value(),
							info[1]->Int32Value(),
							info[2]->Int32Value(),
							info[3]->Int32Value(),
							info[4]->NumberValue()
						);
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::SetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetScalarType(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataWrap::SetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
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
				native->SetSpacing(
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

void VtkImageDataWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataWrap>(info.Holder());
	vtkImageData *native = (vtkImageData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

